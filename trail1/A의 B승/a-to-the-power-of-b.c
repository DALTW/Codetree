#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    int sum = 1;
    for(int i = 0; i < B; i++)
    {
        sum*=A;
    }
    printf("%d",sum);
    return 0;
}