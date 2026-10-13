#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int a[N];
    for(int i = 0; i < N; i++) 
    {
        scanf("%d", &a[i]);
    }

    int min_diff = a[1] - a[0];

    for(int i = 1; i < N - 1; i++) 
    {
        int diff = a[i+1] - a[i];
        if(diff < min_diff) 
        {
            min_diff = diff;
        }
    }

    printf("%d", min_diff);
    return 0;
}