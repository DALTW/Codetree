#include <stdio.h>

int main() {
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int b[10];
    int c[10];
    int n = 0;
    int m = 0;

    for(int i = 0; i < 10; i++)
    {
        if(a[i] < 500)
        {
            b[n] = a[i];
            n++;
        }
        else
        {
            c[m] = a[i];
            m++;
        }
    }

    int big = b[0];
    for(int i = 0; i < n; i++)
    {
        if(big < b[i])
        {
            big = b[i];
        }
    }
    printf("%d ",big);

    int small = c[0];
    for(int i = 0; i < m; i++)
    {
        if(small > c[i])
        {
            small = c[i];
        }
    }
    printf("%d ",small);
    return 0;
}