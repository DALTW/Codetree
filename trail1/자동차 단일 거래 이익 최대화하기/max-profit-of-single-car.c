#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int a[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }

    int min_price = a[0]; 
    int max_profit = 0;   

    for (int i = 1; i < N; i++) 
    {
        if (a[i] < min_price) 
        {
            min_price = a[i];
        } 
        else if (a[i] - min_price > max_profit) 
        {
            max_profit = a[i] - min_price;
        }
    }

    printf("%d\n", max_profit);

    return 0;
}