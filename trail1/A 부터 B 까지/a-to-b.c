#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    printf("%d ",A);

    while(1)
    {
        if(A%2==0)
        {
            A+=3;
            if(A <= B)
            {
                printf("%d ",A);
            }
            else
            {
                break;
            }
        }
        else
        {
            A*=2;
            if(A <= B)
            {
                printf("%d ",A);
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}