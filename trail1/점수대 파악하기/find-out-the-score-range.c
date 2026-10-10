#include <stdio.h>

int main() {
    int a[100];
    int count[11] = {0};

    for(int i = 0; i < 100; i++)
    {
        scanf("%d",&a[i]);

        if(a[i] == 0)
        {
            break;
        }

        count[a[i] / 10]++;
    }

    for(int i = 10; i >= 1; i--)
    {
        printf("%d - %d\n",i*10,count[i]);
    }
    return 0;
}