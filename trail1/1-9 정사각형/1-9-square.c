#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num = 1; 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int current_val = (num - 1) % 9 + 1;
            printf("%d", current_val);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}