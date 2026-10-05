#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d", &A,&B);

    for(int i = 0; i < A; i++)
    {
        for(int j = 1; j <= B; j++)
        {
            printf("%d ",j*(i+1));
        }
        printf("\n");
    }
    return 0;
}