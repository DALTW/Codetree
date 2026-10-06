#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    for(int i = 2; i <= 9; i+=2)
    {
        for(int j = B; j >= A; j--)
        {
            printf("%d * %d = %d",j,i,j*i);
            if(j > A)
            {
                printf(" / ");
            }
        }
        printf("\n");

    }
    return 0;
}