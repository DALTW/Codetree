#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    int c[10];


    for(int i = 0; i < 10; i++)
    {
        if(i == 0)
        {
            c[i] = a;
            printf("%d ",c[i]%10);
        }
        
        if(i == 1)
        {
            c[i] = b;
            printf("%d ",c[i]%10);
        }

        if(i != 0 && i != 1)
        {
            c[i] = c[i-1] + c[i-2];
            printf("%d ",c[i]%10);
        }

    }

    return 0;
}