#include <stdio.h>

int main() {
    int N; 
    scanf("%d",&N);
    
    for(int i = 1; i <= N; i++)
    {
        if(i%2==0 || i%10==5 || (i%3==0 && i%9!=0))
        {

        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}