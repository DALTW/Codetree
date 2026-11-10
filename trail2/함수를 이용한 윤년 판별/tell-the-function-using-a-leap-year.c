#include <stdio.h>

int isLeapYear(int y) {
    if (y % 100 == 0 && y % 400 != 0)
        return 0;
    return y % 4 == 0;
}

int main() {
    int y;
    scanf("%d", &y);

    if (isLeapYear(y))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
