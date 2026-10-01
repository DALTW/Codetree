#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int i = 0;
    while(1)
    {
        if(N > 1)
        {
            N/=2;
            i++;
        }
        else
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}