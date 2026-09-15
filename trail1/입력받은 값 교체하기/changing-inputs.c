#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    if(a<=100 & a>=1 & b<=100 & b>=1)
    {
        printf("%d %d",a,b);
    }
    return 0;
}