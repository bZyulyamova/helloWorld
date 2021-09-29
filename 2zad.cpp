#include<stdio.h>
#include<stdlib.h>
int main()
{
    char dayAsc[7][20] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char dayDes[7][20] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int year, sum = 0, i = 2013;
    scanf("%d", &year);
    if(year > 2013)
    {
            for(i = 2014; i <= year; i++)
             if(i % 4 == 0) sum = (sum + 2) % 7;
             else sum = (sum + 1) % 7;
            printf("%s\n", dayAsc[sum]);
     }
    printf("\n");
    else
    {
        for(i; i > year; i--)
        if(i % 4 == 0) sum = (sum + 2) % 7;
        else sum = (sum + 1) % 7;
        printf("%s\n", dayDes[6 - sum]);
    }
    printf("\n");
    system("pause");
    return 0;
}
 
