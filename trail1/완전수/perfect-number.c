#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int count = 0;

    for(int i = n; i <= m; i++)
    {
        int sum = 0;

        for(int j = 1; j < i; j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        
        if(sum == i)
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}