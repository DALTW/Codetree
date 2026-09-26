#include <stdio.h>

int main() {
    char C;
    int N;
    scanf("%c %d",&C,&N);

    if(C == 'A')
    {
        for(int i = 1; i <= N; i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(int i = N; i >= 1; i--)
        {
            printf("%d ",i);
        }
    }
    return 0;
}