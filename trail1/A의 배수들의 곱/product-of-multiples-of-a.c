#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    int sum = 1;
    for(int i = 1; i <= B; i++)
    {
        if(i%A==0)
        {
            sum*=i;
        }
    }
    printf("%d",sum);
    return 0;
}