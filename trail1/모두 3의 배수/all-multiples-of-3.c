#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    bool dou = false;

    for(int i = 0; i < 5; i++)
    {
        if(a[i]%3!=0)
        {
            dou = true;
            break;
        }
    }

    if(dou == true)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;
}