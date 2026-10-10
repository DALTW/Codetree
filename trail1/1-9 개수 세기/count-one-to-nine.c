#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[100]; 
    int count[10] = {0}; 

    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++; 
    }

    for(int i = 1; i <= 9; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}