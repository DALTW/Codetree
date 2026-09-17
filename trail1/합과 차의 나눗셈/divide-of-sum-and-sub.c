#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    double num = (double)a;
    printf("%.2lf", (num+b)/(num-b));

    return 0;
}