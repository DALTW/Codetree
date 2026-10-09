#include <stdio.h>

int main() {
    int a[10];
    for(int i = 1; i <= 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 1; i <= 10; i++)
    {
        if(i%2==0)
        {
            sum1 += a[i];
        }
        
        if(i%3==0)
        {
            sum2 += a[i];
        }
    }

    double k = (double) sum2;

    printf("%d %.1lf",sum1,k/3);
    return 0;
}