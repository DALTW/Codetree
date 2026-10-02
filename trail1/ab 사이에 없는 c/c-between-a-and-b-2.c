#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    bool dou = false;

    for(int i = 1; i <= b; i++)
    {
        if(c*i >= a && c*i <=b)
        {
            dou = true;   
        }
    }
    
    if(dou == true)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}