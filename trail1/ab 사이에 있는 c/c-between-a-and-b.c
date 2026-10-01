#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    bool dou = false;
    for(int i = 1; i < b; i++)
    {
        if(i*c <= b && i*c >= a)
        {
            dou = true;
            break;
        }
    }
    
    if(dou == true)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}