#include <stdio.h>

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int days_from_new_year(int m, int d) {
    int total = 0;
    for (int i = 1; i < m; i++)
        total += num_of_days[i];
    return total + d;
}

int main() {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    
    char *day_of_week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int diff = days_from_new_year(m2, d2) - days_from_new_year(m1, d1);
    int idx = (diff % 7 + 7) % 7;

    printf("%s\n", day_of_week[idx]);
    
    return 0;
}
