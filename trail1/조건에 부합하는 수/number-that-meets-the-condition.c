#include <stdio.h>

int main() {
    int A;
    scanf("%d",&A);

    for(int i = 1; i <= A; i++)
    {
        if((i%2==0 && i%4!=0) || (i/8)%2==0 || (i%7) < 4)
        {

        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}