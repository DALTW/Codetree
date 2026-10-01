#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int j = 0;

    while(1)
    {
        if(N%2==0)
        {
            N/=2;
            j++;
        }
        else if(N==1)
        {
            break;
        }
        else 
        {
            N=N*3+1;
            j++;
        }
    }
    printf("%d",j);
    return 0;
}