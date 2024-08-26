#include<stdio.h>
int main(){

     int index,sum=0;
     float avg;
     int num_subject;
     printf("Enter any number between 0 to 100:");
     scanf("%d",&num_subject);
     if(num_subject<1||num_subject>100){
        printf("Invalid Input!");
        return 0;
     }
     int marks[num_subject];
     printf("Enter subject marks in between 0 to 100\n");
     for(index=0;index<num_subject;index++){
          int mark;

            do{
                printf("Subjects's[%d]marks:",index+1);
                scanf("%d",&mark);
                if(mark<1||mark>100){
                    printf("Invalid marks!\n");
                }
            }while(mark<1||mark>100);
            marks[index]=mark;

        }
        printf("\n\n");
     for (index=0;index<num_subject;index++){
         printf("marks[%d]=%d\n",index+1,marks[index]);
         sum +=marks[index];
     }
        printf("sum=%d\n",sum);
        printf("avg=%.2f\n",(float)sum/num_subject);
        float cGPA;
        if(avg>=80){
            cGPA=5.00;
        }else if(avg>=70){
            cGPA=4.00;
        }else if(avg>=60){
            cGPA=3.5;
        } else{
            cGPA=3.0;
        }
        printf("cGPA is: %.2f",cGPA);

    }

