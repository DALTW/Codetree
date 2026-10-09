#include <stdio.h>

int main() {
    char c[20];
    for(int i = 0; i < 20; i++)
    {
        scanf("%c",&c[i]);
    }

    for(int i = 0; i < 20; i++)
    {
        if(i == 2 || i == 14 || i == 8)
        {
            printf("%c ",c[i]);
        }
    }
    return 0;
}