#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    int sum = 0;
    
    for(int i = A; i <=B; i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}