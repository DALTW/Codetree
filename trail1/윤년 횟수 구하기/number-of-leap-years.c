#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int a=0;

    for(int i = 1; i <= N; i++)
    {
        if(i%100==0 && i%400!=0)
        {
            
        }
        else if(i%4==0)
        {
            a++;
        }

    }
    printf("%d",a);
    return 0;
}