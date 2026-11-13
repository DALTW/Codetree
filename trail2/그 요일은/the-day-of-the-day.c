#include <stdio.h>
#include <string.h>
int main() {
    int m1, d1, m2, d2;
    char A[4];
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    scanf("%s", A);
    
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *day_of_week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int target = 0;
    for (int i = 0; i < 7; i++)
        if (strcmp(A, day_of_week[i]) == 0)
            target = i;

    int month = m1, day = d1, dow = 0, count = 0;
    while (1) {
        if (dow == target) count++;
        if (month == m2 && day == d2) break;

        day++;
        if (day > num_of_days[month]) {
            month++;
            day = 1;
        }
        dow = (dow + 1) % 7;
    }
    printf("%d\n", count);
    
    return 0;
}
