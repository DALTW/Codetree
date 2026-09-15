#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);
    if(A<=100 & A>=1 & B<=100 & B>=1)
    {
        printf("%d %d %d",A,B,A+B);
    }
    return 0;
}