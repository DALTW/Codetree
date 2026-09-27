#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int h=0;
    int b=0;
    int g=0;

    for(int i = 1; i <= n; i++)
    {
        if(i%12==0)
        {
            h++;
        }
        else if(i%3==0)
        {
            b++;
        }
        else if(i%2==0)
        {
            g++;
        }
    }

    printf("%d %d %d",g,b,h);

    return 0;
}