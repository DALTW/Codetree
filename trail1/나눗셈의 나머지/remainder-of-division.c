#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int count = 0;
    int a[100] = {0}; 

    while (A > 1) {
        int remainder = A % B; 
        a[remainder]++;        
        
        A = A / B;
    }

    for (int i = 0; i < 100; i++) {
        count += (a[i] * a[i]);
    }
    
    printf("%d", count);
    
    return 0;
}