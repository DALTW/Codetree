#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=100 & a>=1 & b<=100 & b>=1)
    {
        printf("%d",a*b);
    }
    return 0;
}