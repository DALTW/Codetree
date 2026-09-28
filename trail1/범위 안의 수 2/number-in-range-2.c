#include <stdio.h>

int main() {
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int sum = 0;
    int k = 0;

    for(int i = 0; i < 10; i++)
    {
        if(a[i] >= 0 && a[i] <= 200)
        {
            sum+=a[i];
            k++;
        }
    }
    double j = (double) k;
    printf("%d %.1lf",sum,sum/j);
    return 0;
}