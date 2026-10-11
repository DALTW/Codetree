#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int a[A];
    for(int i = 0; i < A; i++) 
    {
        scanf("%d", &a[i]);
    }

    int b[B];
    for(int i = 0; i < B; i++) 
    {
        scanf("%d", &b[i]);
    }

    int found = 0; 

    for(int i = 0; i <= A - B; i++) {
        int match = 1;
        
        for(int j = 0; j < B; j++) 
        {
            if(a[i + j] != b[j]) 
            {
                match = 0;
                break;
            }
        }

        if(match == 1) 
        {
            found = 1;
            break;
        }
    }

    if(found == 1) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}