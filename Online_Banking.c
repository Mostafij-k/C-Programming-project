#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct User{
    char ac[50];
    char phone[50];
    char password[50];
    float balance;

};

int main(){
    struct User user;
    FILE *fp;
    char filename[50],phone[50],pws[50];
    int opt,choice;
    char cont='y';
    float amount;
    printf("What do you want?");
    printf("\n1. Register an account: ");
    printf("\n2. Login to an account: ");

    printf("\nYour choice:\n");
    scanf("%d", &opt);

    if(opt==1){
        system("cls");
        printf("Enter your account number: ");
        scanf("%s", user.ac);
        printf("Enter your phone number: ");
        scanf("%s",user.phone);
        printf("Enter your password: ");
        scanf("%s", user.password);
        user.balance=0;
        strcpy(filename,user.phone);
        fp=fopen(strcat(filename,".dat"), "w");
        fwrite(&user,sizeof(struct User),1,fp);
        if(fwrite!=0){
            printf("File successfully created.");
        }else("Something went wrong");
         fclose(fp);
    }


    if(opt==2){
        system("cls");
        printf("Enter phone number: ");
        scanf("%s",phone);
        printf("Enter password: ");
        scanf("%s",pws);
        strcpy(filename,phone);
        fp=fopen(strcat(filename,".dat"),"r");
        if(fp==NULL){
            printf("\nAccount number not registered");
        }
        else{
            fread(&user,sizeof(struct User),1,fp);
        fclose(fp);
        if(!strcmp(pws,user.password)){
            while(cont=='y'){
                system("cls");
                printf("\nPress 1 for balance inquiry");
                printf("\nPress 2 for deposit cash");
                printf("\nPress 3 for cash withdraw");
                printf("\nPress 4 for online transfer");
                printf("\nPress 5 for password change");
                printf("\nYour choice: ");
                scanf("%d",&choice);
                switch(choice){
                case 1:
                    printf("\nYour current balance is: %.2f",user.balance);
                    break;
                case 2:
                    printf("\nEnter the amount: ");
                    scanf("%f",&amount);
                    user.balance+=amount;
                    fp=fopen(filename,"w");
                    fwrite(&user,sizeof(struct User),1,fp);
                    if(fwrite!=NULL) printf("\nSuccessfully deposited.");
                    fclose(fp);
                }

                printf("\nDo you want to continue the transfer[y/n]: ");
                scanf("%s",&cont);
            }
        }
        else{
            printf("Invalid Password");
        }

        }

    }

getch();
return 0;
}
