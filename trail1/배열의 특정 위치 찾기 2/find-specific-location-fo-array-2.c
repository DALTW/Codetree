#include <stdio.h>

int main() {
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < 10; i++)
    {
        if(i%2==0)
        {
            sum1 += a[i];
        }
        else
        {
            sum2 += a[i];
        }
    }

    if(sum1 > sum2)
    {
        printf("%d",sum1 - sum2);
    }
    else
    {
        printf("%d",sum2 - sum1);
    }
    return 0;
}