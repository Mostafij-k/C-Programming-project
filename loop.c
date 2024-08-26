#include<stdio.h>
#include<ctype.h>
int main(){
    int month;
    printf("Enter your month: ");
    scanf("%d",&month);
    if(month==1){
        printf("Total 31 Days");
    }else if(month==2){
        printf("28/29 Days");
    }else if(month==3){
        printf("31 Days");
    }else if(month==4){
        printf("30 Days");
    }else if(month==5){
        printf("31 Days");
    }else if(month==6){
        printf("30 Days");
    }else if(month==7){
        printf("31 Days");
    }else if(month==8){
        printf("31 Days");
    }else if(month==9){
        printf("30 Days");
    }else if(month==10){
        printf("31 Days\n");
            int day;
            printf("Enter your day:");
            scanf("%d",&day);
            if(day==20){
                printf("This is my Birthday");
            }else{
                printf("Normal Day");
            }
    }else if(month==11){
        printf("30 Days");
    }else if(month==12){
        printf("31 Days");
    }else{
        printf("This is an Invalid Month.Please enter month Between 1-12");
    }
getch();
return 0;
}
