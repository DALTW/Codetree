#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    int sum = 0;

    int big;
    
    if(A > B)
    {
        big = A;
        A = B;
        B = big;
    }

    for(int i = A; i <= B; i++)
    {
        if(i%5==0)
        {
            sum+=i;
        }
    }

    printf("%d",sum);
    return 0;
}