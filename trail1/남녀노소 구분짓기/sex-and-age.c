#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    if(a==0 && b >= 19)
    {
        printf("MAN");
    }
    else if(a==0 && b < 19)
    {
        printf("BOY");
    }
    else if(a==1 && b >= 19)
    {
        printf("WOMAN");
    }
    else
    {
        printf("GIRL");
    }
    return 0;
}