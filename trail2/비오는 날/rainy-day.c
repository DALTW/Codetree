#include <stdio.h>
#include <string.h>
int n;
char date[101][20], day[101][20], weather[101][20];

typedef struct {
    char date[20];
    char day[20];
    char weather[20];
} Forecast;

Forecast f[101];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", date[i], day[i], weather[i]);
    }

    for (int i = 0; i < n; i++) {
        strcpy(f[i].date, date[i]);
        strcpy(f[i].day, day[i]);
        strcpy(f[i].weather, weather[i]);
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(f[i].weather, "Rain") != 0) continue;
        if (ans == -1 || strcmp(f[i].date, f[ans].date) < 0)
            ans = i;
    }

    printf("%s %s %s\n", f[ans].date, f[ans].day, f[ans].weather);
    return 0;
}
