#include <stdio.h>

int main() {
    int a[10];
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        if(i == 2 || i == 4 || i == 9)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);

    return 0;
}