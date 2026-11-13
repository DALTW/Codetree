#include <stdio.h>
int A, B, C, D;
int main() {
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    int hour = A, min = B, elapsed = 0;
    while (!(hour == C && min == D)) {
        elapsed++;
        min++;
        if (min == 60) {
            hour++;
            min = 0;
        }
    }
    printf("%d\n", elapsed);
    
    return 0;
}
