#include <stdio.h>

int main() {
    int B,A;
    scanf("%d %d",&B,&A);

    for(B;B>=A;B-=2)
    {
        printf("%d ",B);
    }
    return 0;
}