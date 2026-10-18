#include <stdio.h>

int main() {
    int n = 4;
    int val;

    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&val);
            sum += val;
        }
        printf("%d\n",sum);
    }
    return 0;
}