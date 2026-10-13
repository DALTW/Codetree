#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }

    int sum;

    for(int j = 0; j < N; j++)
    {
        for(int i = 0; i < N-1; i++)
        {
            if(a[i] < a[i+1])
            {
                sum = a[i];
                a[i] = a[i+1];
                a[i+1] = sum;
            }
        }
    }

    printf("%d %d",a[0],a[1]);
    return 0;
}