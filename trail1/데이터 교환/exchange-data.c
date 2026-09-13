#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int n,m;
    n = a;
    a = c;
    c = n;
    m = b;
    b = c;
    c = m;
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}