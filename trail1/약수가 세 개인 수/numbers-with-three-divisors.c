#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int count = 0;

    for(int i = n; i <= m; i++)
    {
        int yak = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                yak++;
            }
        }

        if(yak == 3)
        {
            count++;
        }
    }

    printf("%d",count);
    return 0;
}