#include <stdio.h>
#include <stdbool.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);
    bool sum = false;

    for(int i = A; i <= B; i++)
    {
        if(1920%i==0 && 2880%i==0)
        {
            sum = true;
            break;
        }
    }

    if(sum == true)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}