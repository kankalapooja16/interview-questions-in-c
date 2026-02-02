#include <stdio.h>

int main() {
    int cigars;
    int weekends;
    printf("enter the cigars \n");
    scanf("%d",&cigars);
    printf("enter the weekends \n");
    scanf("%d",&weekends);
    if(weekends==1)
    {
        if(cigars>=40)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
        else
        {
            if(cigars>=40&&cigars<=60)
            {
                printf("true");
            }
            else
            {
                printf("false");
            }
}
}