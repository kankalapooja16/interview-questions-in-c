#include <stdio.h>

int main() {
    int you;
    int date;
    printf("enter the rate of you and date \n");
    scanf("%d %d",&you,&date);
    if(you<=2||date<=2)
    {
        printf("0");
    }
    else if(you>=8||date>=8)
{
    printf("1");
}
else
{
    printf("2");
}
}