#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }

    int count = 0;

    for(int i = 0; i < N; i++)
    {
        if(a[i] == 2)
        {
            count++;
        }

        if(count == 3)
        {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}