#include <stdio.h>

int main() {
    int N,Q;
    scanf("%d %d",&N,&Q);

    int n[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&n[i]);
    }

    int a,b,c;
    for(int i = 0; i < Q; i++)
    {
        scanf("%d %d",&a,&b);

        if(a == 1)
        {
            printf("%d\n",n[b-1]);
        }
        else if(a == 2)
        {
            int count = 0;

            for(int i = 0; i < N; i++)
            {
                if(b == n[i])
                {
                    printf("%d\n",i+1);
                    count++;
                    break;
                }
            }
            
            if(count == 0)
            {
                printf("0\n");
            }
        }
        else
        {
            scanf("%d",&c);
            for(int i = b-1; i < c; i++)
            {
                printf("%d ",n[i]);
            }
            printf("\n");
        }
    }
    return 0;
}