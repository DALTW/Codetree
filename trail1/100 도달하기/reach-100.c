#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[100];

    for(int i = 0; i < 100; i++)
    {
        if(i == 0)
        {
            a[i] = 1; 
        }
        else if(i == 1)
        {
            a[i] = N; 
        }
        else
        {
            a[i] = a[i-1] + a[i-2];
        }

        if(a[i] > 100)
        {
            printf("%d ", a[i]);
            break;
        }

        printf("%d ", a[i]);
    }

    return 0;
}