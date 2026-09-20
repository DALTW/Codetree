#include <stdio.h>

int main() {
    int A;
    scanf("%d",&A);

    if(A%3==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    if(A%5==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}