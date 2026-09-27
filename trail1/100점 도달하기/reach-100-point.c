#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = N; i <= 100; i++)
    {
        if(i>=90)
        {
            printf("A ");
        }
        else if(i >= 80)
        {
            printf("B ");
        }
        else if(i >= 70)
        {
            printf("C ");
        }
        else if(i >= 60)
        {
            printf("D ");
        }
        else
        {
            printf("F ");
        }
    }
    return 0;
}