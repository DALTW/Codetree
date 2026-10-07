#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int a[N],b[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }

    int count = 1;

    for(int i = 0; i < N; i++)
    {
        for(int j = a[i]; j <= b[i]; j++)
        {
            count*=j;
        }
        printf("%d",count);
        printf("\n");
        count = 1;
    }
    return 0;
}