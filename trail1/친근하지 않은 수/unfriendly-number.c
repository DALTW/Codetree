#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int j = 0;
    for(int i = 1; i <= N; i++)
    {
        if(i%2==0 || i%3==0 || i%5==0)
        {
            
        }
        else
        {
            j++;
        }
    }
    printf("%d",j);
    return 0;
}