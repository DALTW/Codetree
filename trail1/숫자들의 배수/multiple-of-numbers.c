#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int count = 0;

    for(int i = 1; ; i++)
    {
        if((N*i)%5==0)
        {
            count++;
        }

        if(count == 2)
        {
            printf("%d ",i*N);
            break;
        }

        printf("%d ",i*N);
    }
    return 0;
}