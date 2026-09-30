#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int j = 1;
    int k = N;

    for(int i = 1; i <= N; i++)
    {
        k/=i;

        if(k > 1)
        {
            j++;
        }
        else
        {
            break;
        }
    }

    printf("%d",j);
    return 0;
}