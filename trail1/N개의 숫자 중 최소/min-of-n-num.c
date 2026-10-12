#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int a[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }

    int b;

    b = a[0];
    int count = 0;

    for(int i = 0; i < N; i++)
    {
        if(b > a[i])
        {
            b = a[i];
            count = 1;
        }
        else if(b == a[i])
        {
            count++;
        }
    }

    printf("%d %d", b, count);
    return 0;
}