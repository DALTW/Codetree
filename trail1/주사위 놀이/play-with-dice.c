#include <stdio.h>

int main() {
    int a[10];

    int count[7]={0};
    for(int i = 1; i <= 10; i++)
    {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }

    for(int i = 1; i <= 6; i++)
    {
        printf("%d - %d\n",i,count[i]);
    }
    return 0;
}