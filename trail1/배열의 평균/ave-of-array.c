#include <stdio.h>

int main() {
    int a[2][4];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0; i < 2; i++)
    {
        double sum = 0;

        for(int j = 0; j < 4; j++)
        {
            sum+=a[i][j];
        }
        printf("%.1lf ",sum/4);
    }

    printf("\n");

    for(int i = 0; i < 4; i++)
    {
        double sum = 0;

        for(int j = 0; j < 2; j++)
        {
            sum+=a[j][i];
        }
        printf("%.1lf ",sum/2);
    }

    printf("\n");

    double k = 0;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            k+=a[i][j];
        }
    }

    printf("%.1lf",k/8);
    return 0;
}