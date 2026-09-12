#include <stdio.h>

int main() {
    double a = 30.48;
    int b = 160934;
    double c = 9.2;
    double d = 1.3;

    printf("%.1lfft = %.1lfcm\n",c,a*c);
    printf("%.1lfmi = %.1lfcm",d,b*d);
    return 0;
}