#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int end = N - 1; 

    while(1) 
    {
        int max_val = a[0];
        int max_idx = 0;

        for(int i = 0; i <= end; i++) 
        {
            if(a[i] > max_val) 
            {
                max_val = a[i];
                max_idx = i;
            }
        }

        printf("%d ", max_idx + 1);

        if(max_idx == 0) 
        {
            break;
        }

        end = max_idx - 1;
    }

    return 0;
}