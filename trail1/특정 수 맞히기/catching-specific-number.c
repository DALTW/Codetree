#include <stdio.h>

int main() {
    int a;

    while(1)
    {
        scanf("%d",&a);

        if(a<25)
        {
            printf("Higher\n");
        }
        else if(a>25)
        {
            printf("Lower\n");
        }
        else
        {
            printf("Good\n");
            break;
        }
    }
    return 0;
}