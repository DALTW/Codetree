#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int a[N],b[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i = 0; i < N; i++)
    {
        int sum = 0;
        for(int j = a[i]; j <= b[i]; j++)
        {
            if(j%2==0)
            {
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}