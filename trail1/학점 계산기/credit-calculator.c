#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    double a[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%lf",&a[i]);
    }

    double sum = 0;

    for(int i = 0; i < N; i++)
    {
        sum += a[i];
    }

    double k = sum / N;

    printf("%.1lf\n",k);

    if(k >= 4.0)
    {
        printf("Perfect");
    }
    else if(k >= 3.0)
    {
        printf("Good");
    }
    else
    {
        printf("Poor");
    }
    return 0;
}