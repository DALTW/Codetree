#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d",&N);

    bool sum = false;

    for(int i = 2; i < N; i++)
    {
        if(N%i==0)
        {
            sum = true;
            break;
        }
    }

    if(sum == true)
    {
        printf("C");
    }
    else
    {
        printf("N");
    }
    
    return 0;
}