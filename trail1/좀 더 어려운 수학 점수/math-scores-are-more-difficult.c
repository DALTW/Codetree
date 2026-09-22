#include <stdio.h>

int main() {
    int a1,a2,b1,b2;
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);

    if(a1 > b1 || (a1==b1) && a2 > b2)
    {
        printf("A");
    }
    else
    {
        printf("B");
    }
    return 0;
}