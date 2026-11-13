#include <stdio.h>
int main(void) {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month = m1, day = d1, count = 1;
    while (!(month == m2 && day == d2)) {
        count++;
        day++;
        if (day > num_of_days[month]) {
            month++;
            day = 1;
        }
    }
    printf("%d\n", count);
    
    return 0;
}
