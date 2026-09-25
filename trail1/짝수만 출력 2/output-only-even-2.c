#include <stdio.h>

int main() {
    int B,A;
    scanf("%d %d",&B,&A);

    while(B >= A)
    {
        printf("%d ",B);
        B-=2;
    }
    return 0;
}