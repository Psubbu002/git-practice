#include <stdio.h>
int main(void)
{
    int date,month,year;
    printf("Enter date\tmonthe\tyear:\n");
    scanf("%d %d %d",&date,&month,&year);
    if(month<3)
    {
        month+=12;
        year--;
    }
    int k=year%100;
    int j=year/100;

    int h = (date+ (13*(month + 1))/5 + k + k/4 + j/4 + 5*j) % 7;

    char *days[] = {
        "Saturday","Sunday","Monday","Tuesday",
        "Wednesday","Thursday","Friday"
    };
    printf("Day is %s\n", days[h]);
    return 0;
}