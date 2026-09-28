#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    int sum = 0;
    int j = 0;

    for(int i = A; i <= B; i++)
    {
        if(i%5==0 || i%7==0)
        {
            sum+=i;
            j++;
        }
    }

    double k = (double) j;
    printf("%d %.1lf",sum,sum/k);
    return 0;
}