#include <stdio.h>

int main() {
    int a[10];
    int b = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] == 0)
        {
            break;
        }
        b++;
    }

    int sum = 0;

    for(int i = 0; i < b; i++)
    {
        sum+=a[i];
    }

    double k = (double) sum;
    printf("%d %.1lf",sum,k/b);
    return 0;
}