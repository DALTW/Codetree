#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int max_sum = 0;
    for (int num = x; num <= y; num++) {
        int sum = 0, t = num;
        while (t > 0) {
            sum += t % 10;   // 일의 자리 숫자를 더하고
            t /= 10;         // 한 자리씩 줄여 나감
        }
        if (sum > max_sum)
            max_sum = sum;
    }
    printf("%d\n", max_sum);
    
    return 0;
}
