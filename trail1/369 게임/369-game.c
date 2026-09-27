#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
    {
        if(i%3==0 || i%10==3 || i%10==6 || i%10==9 || i/10 == 3 || i/10 == 6 || i/10 == 9)
        {
            printf("0 ");
        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}