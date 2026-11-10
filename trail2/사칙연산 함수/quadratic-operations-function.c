#include <stdio.h>

int add(int a, int c) { return a + c; }
int sub(int a, int c) { return a - c; }
int mul(int a, int c) { return a * c; }
int divide(int a, int c) { return a / c; }

int main() {
    int a, c;
    char o;

    scanf("%d %c %d", &a, &o, &c);

    if (o == '+')
        printf("%d + %d = %d\n", a, c, add(a, c));
    else if (o == '-')
        printf("%d - %d = %d\n", a, c, sub(a, c));
    else if (o == '*')
        printf("%d * %d = %d\n", a, c, mul(a, c));
    else if (o == '/')
        printf("%d / %d = %d\n", a, c, divide(a, c));
    else
        printf("False\n");

    return 0;
}
