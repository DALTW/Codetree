#include <stdio.h>

int main() {
    int a[10];
    int b = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
        b++;
    }

    for(int i = b-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}