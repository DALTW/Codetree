#include <stdio.h>

int main() {
    int a[100];

    int count[10] = {0};

    for(int i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]); 
        
        if(a[i] == 0)
        {
            break;
        }

        if(a[i] / 10 != 0)
        {
            count[a[i] / 10]++;
        }
    }

    for(int i = 1; i < 10; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }
    return 0;
}