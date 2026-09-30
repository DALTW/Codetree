#include <stdio.h>

int main() {
    int a;
    int j = 0;

    while(1)
    {
        scanf("%d",&a);

        if(a%2!=0)
        {

        }
        else if(a%2==0)
        {
            printf("%d\n",a/2);
            j++;
        }

        if(j == 3)
        {
            break;
        }
    }
    return 0;
}