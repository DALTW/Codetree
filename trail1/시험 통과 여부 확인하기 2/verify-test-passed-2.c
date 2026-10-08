#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int a[4];
    int b = 0;
    int k = 0;

    for(int i = 0; i < N; i++)
    {
        int p = 0;

        for(int j = 0; j < 4; j++)
        {
            scanf("%d",&a[j]);
            p+=a[j];
        }

        k = p / 4;

        if(k >= 60)
        {
            printf("pass\n");
            b++;
        }
        else
        {
            printf("fail\n");
        }
    }
    printf("%d",b);
    return 0;
}