#include <stdio.h>

int main() {
    int h,w,b;
    scanf("%d %d",&h,&w);

    b = (10000*w)/(h*h);

    if(b > 25)
    {
        printf("%d\nObesity",b);
    }
    else
    {
        printf("%d",b);
    }
    return 0;
}