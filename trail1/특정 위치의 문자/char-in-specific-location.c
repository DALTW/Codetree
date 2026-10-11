#include <stdio.h>

int main() {
    char a[6]={'L','E','B','R','O','S'};

    char b;
    scanf("%c",&b);

    int count = 0;
    
    for(int i = 0; i < 6; i++)
    {
        if(b == a[i])
        {
            printf("%d",i);
            count++;
        }
    }

    if(count == 0)
    {
        printf("None");
    }
    return 0;
}