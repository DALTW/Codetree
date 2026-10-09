#include <stdio.h>

int main() {
    int N[100];
    for(int i = 0; i < 100; i++)
    {
        scanf("%d",&N[i]);
    }
    
    int sum = 0;

    for(int i = 0; i < 100; i++)
    {
        if(N[i]==0)
        {
            sum = N[i-1]+N[i-2]+N[i-3];
            break;
        }
    }

    printf("%d",sum);

    return 0;
}