#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[N];
    for(int i = 0; i < N; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    int b[N];
    for(int i = 0; i < N; i++) 
    {
        b[i] = 0;
    }

    for(int i = 0; i < N; i++) 
    {
        for(int j = 0; j < N; j++) 
        {
            if(i != j && a[i] == a[j]) 
            {
                b[i] = 1;
            }
        }
    }

    int c[N];
    int j = 0;

    for(int i = 0; i < N; i++) 
    {
        if(b[i] == 0) 
        {
            c[j] = a[i];
            j++;
        }
    }

    if(j == 0) 
    {
        printf("-1\n");
    } 
    else 
    {
        int max_val = c[0];
        for(int i = 1; i < j; i++) 
        {
            if(c[i] > max_val) 
            {
                max_val = c[i];
            }
        }
        printf("%d\n", max_val);
    }

    return 0;
}