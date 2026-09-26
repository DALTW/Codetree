#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    if(A > 0)
    {
        for(int i = 0; i < B; i++)
        {
            printf("%d",A);
        }
    }
    else
    {
        printf("0");
    }
    return 0;
}