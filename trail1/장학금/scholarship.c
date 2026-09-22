#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    if(b >= 95 && a >= 90)
    {
        printf("100000");
    }
    else if(b >= 90 && a >= 90)
    {
        printf("50000");
    }
    else
    {
        printf("0");
    }
    return 0;
}