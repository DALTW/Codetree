#include <stdio.h>

int main() {
    double a[8];

    for(int i = 0; i < 8; i++)
    {
        scanf("%lf",&a[i]);
    }

    double sum = 0;

    for(int i = 0; i < 8; i++)
    {
        sum += a[i];
    }

    printf("%.1lf",sum/8);
    return 0;
}