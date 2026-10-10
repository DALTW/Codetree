#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    int c[10];

    for(int i = 0; i < 10; i++)
    {
        if(i==0)
        {
            c[i] = a;
        }
        else if(i==1)
        {
            c[i] = b;
        }
        else
        {
            c[i] = c[i-1] + (2*c[i-2]);
        }
        printf("%d ",c[i]);
    }
    return 0;
}