#include<stdio.h>
#include<stdlib.h>

int get_1st_weekday(int year){
    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}
int main(){
    system("color 3F");
    int year,totalDays,weekdays=0,startingday;
    printf("Enter your Year: ");
    scanf("%d",&year);
    char *months[]={"January","February","March","April","May","Jun","July","August","September","October","November","December"};

    int daysInmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
        daysInmonth[1]=29;
        startingday=get_1st_weekday(year);
    for(int i=0;i<12;i++){
        printf("\n\n------------ %s -------------\n\n",months[i]);
        printf("\n  Sun  Mon  Tue  Wes  Thus  Fri Sat\n");

        totalDays=daysInmonth[i];
    for(int j=1;j<=totalDays;j++){
        printf("%5d",j);
        weekdays++;
        if(weekdays>6){
            printf("\n");
            weekdays=0;
        }
        startingday=weekdays;
    }

    }
    getch();
    return 0;
}
