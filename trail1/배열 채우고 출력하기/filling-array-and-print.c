#include <stdio.h>

int main() {
    char a[20];

    for(int i = 1; i <= 20; i++)
    {
        scanf("%c",&a[i]);
    }

    for(int i = 20; i > 0; i--)
    {
        if(i%2!=0)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}