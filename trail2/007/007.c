#include <stdio.h>
#include <string.h>
char secret_code[11];

struct Agent {
    char code[11];
    char point;
    int time;
};

int main() {
    char meeting_point;
    int time;
    scanf("%s %c %d", secret_code, &meeting_point, &time);

    struct Agent a;
    strcpy(a.code, secret_code);
    a.point = meeting_point;
    a.time = time;

    printf("secret code : %s\n", a.code);
    printf("meeting point : %c\n", a.point);
    printf("time : %d\n", a.time);

    return 0;
}
