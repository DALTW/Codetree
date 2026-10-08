#include <stdio.h>

int main() {
    int s;
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&s);
        sum+=s;
    }
    printf("%d",sum);
    return 0;
}