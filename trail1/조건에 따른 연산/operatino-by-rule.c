#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int cnt = 0;

    while(1)
    {
        if(N >= 1000)
        {
            break;
        }
        else if(N%2==0)
        {
            N=N*3+1;
            cnt++;
        }
        else
        {
            N=N*2+2;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}