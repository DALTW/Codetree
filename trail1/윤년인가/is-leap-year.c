#include <stdio.h>

int main() {
    int Y;
    scanf("%d",&Y);

    if(Y%100==0 && Y%400!=0)
    {
        printf("false");
    }
    else if(Y%4==0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}