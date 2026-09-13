#include <stdio.h>

int main() {
    double N;
    scanf("%lf",&N);
    if(N <= 100 & N >= 0)
    {
        printf("%.1lf",N*30.48);
    }
    return 0;
}