#include <stdio.h>

int main() {
    int M;
    scanf("%d",&M);

    if(M >= 3 && M <= 5)
    {
        printf("Spring");
    }
    else if(M >= 6 && M <= 8)
    {
        printf("Summer");
    }
    else if(M >=9 && M <= 11)
    {
        printf("Fall");
    }
    else
    {
        printf("Winter");
    }
    return 0;
}