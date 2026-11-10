#include <stdio.h>
int y, m, d;

int isLeapYear(int year) {
    if (year % 100 == 0 && year % 400 != 0)
        return 0;
    return year % 4 == 0;
}

int existsDate(int year, int month, int day) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
        days[2] = 29;
    return day >= 1 && day <= days[month];
}

void printSeason(int month) {
    if (month >= 3 && month <= 5)
        printf("Spring\n");
    else if (month >= 6 && month <= 8)
        printf("Summer\n");
    else if (month >= 9 && month <= 11)
        printf("Fall\n");
    else
        printf("Winter\n");
}

int main(void) {
    scanf("%d %d %d", &y, &m, &d);

    if (existsDate(y, m, d))
        printSeason(m);
    else
        printf("-1\n");

    return 0;
}
