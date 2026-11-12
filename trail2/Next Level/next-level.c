#include <stdio.h>
#include <string.h>
char id[11];
int level;

struct User {
    char id[11];
    int level;
};

int main(){
    scanf("%s %d", id, &level);

    struct User u1 = {"codetree", 10};
    struct User u2;
    strcpy(u2.id, id);
    u2.level = level;

    printf("user %s lv %d\n", u1.id, u1.level);
    printf("user %s lv %d\n", u2.id, u2.level);

    return 0;
}
