#include <stdio.h>

int main() {
    int N,a;
    int i = 1;
    scanf("%d %d",&N,&a);

    while(i<=N)
    {
        if(i%a==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
        i++;
    }
    return 0;
}