#include <stdio.h>

int main() {
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int count1=0;
    int count2=0;
    for(int i = 0; i <10; i++)
    {
        if(a[i]%3==0)
        {
            count1++;
        }
    }
    for(int i = 0; i <10; i++)
    {
        if(a[i]%5==0)
        {
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}