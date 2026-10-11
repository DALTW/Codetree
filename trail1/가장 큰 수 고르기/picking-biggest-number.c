#include <stdio.h>

int main() {
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int count = a[0];

    for(int i = 0; i < 9; i++)
    {
        if(count < a[i])
        {
            count = a[i];
        }
    }

    printf("%d",count);
    return 0;
}