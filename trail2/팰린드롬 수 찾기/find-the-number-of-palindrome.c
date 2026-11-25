#include <stdio.h>

int is_palindrome(int num) {
    int rev = 0, orig = num;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev == orig;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int cnt = 0;
    for (int i = x; i <= y; i++)
        if (is_palindrome(i)) cnt++;
    printf("%d\n", cnt);
    
    return 0;
}
