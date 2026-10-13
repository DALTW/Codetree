#include <stdio.h>

int main() {
    int a[100];
    int count = 0;
    for(int i = 0; i < 100; i++)
    {
        scanf("%d",&a[i]);
        count++;
        if(a[i] == 999 || a[i] == -999)
        {
            count--;
            break;
        }
    }

    int big = a[0];
    int small = a[0];

    for(int i = 0; i < count; i++)
    {
        if(big < a[i])
        {
            big = a[i];
        }
    }

    for(int i = 0; i < count; i++)
    {
        if(small > a[i])
        {
            small = a[i];
        }
    }

    printf("%d %d",big, small);
    return 0;
}