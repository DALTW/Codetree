#include <stdio.h>

int main() {
    int a,b,c;
    char e,f,g;
    scanf("%c %d %c %d %c %d",&e,&a,&f,&b,&g,&c);


    if((e == 'Y' && a >= 37))
    {
        if((f == 'Y' && b >= 37) || (g == 'Y' && c >= 37))
        {
            printf("E");
        }
        else
        {
            printf("N");
        }
    }
    else if((f == 'Y' && b >= 37))
    {
        if((e == 'Y' && a >= 37) || (g == 'Y' && c >= 37))
        {
            printf("E");
        }
        else
        {
            printf("N");
        }
    }
    else if((g == 'Y' && c >= 37))
    {
        if((e == 'Y' && a >= 37) || (f == 'Y' && b >= 37))
        {
            printf("E");
        }
        else
        {
            printf("N");
        }
    }
    else
    {
        printf("N");
    }
    return 0;
}