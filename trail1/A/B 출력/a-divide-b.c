#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    printf("%d.",A/B);

    int r = A % B;         
    for (int i = 0; i < 20; i++)
    {
        r *= 10;
        printf("%d", r / B);  
        r %= B;               
    }
    return 0;
}