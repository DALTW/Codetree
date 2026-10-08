#include <stdio.h>

int main() {
    int N[10];
    int sum = 0;
    int j = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&N[i]);
        if(N[i] >= 250)
        break;
        sum+=N[i];
        j++;
    }

    double n = (double) sum;
    printf("%d %.1lf",sum, n/j);
    return 0;
}