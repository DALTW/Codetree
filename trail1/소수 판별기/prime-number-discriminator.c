#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d",&N);

    bool sosu = false;

    for(int i = 2; i <= 1000; i++)
    {
        if(N/i != 1 && N%i == 0)
        {
            sosu = true;
            break;
        }
    }

    if(sosu==true)
    {
        printf("C");
    }
    else
    {
        printf("P");
    }
    return 0;
}