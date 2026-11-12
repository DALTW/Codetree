#include <stdio.h>
#include <string.h>
int n;
char name[10][11];
char address[10][11];
char region[10][11];

typedef struct {
    char name[11];
    char addr[11];
    char city[11];
} Person;

Person people[10];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", name[i], address[i], region[i]);
    }

    for (int i = 0; i < n; i++) {
        strcpy(people[i].name, name[i]);
        strcpy(people[i].addr, address[i]);
        strcpy(people[i].city, region[i]);
    }

    int last = 0;
    for (int i = 1; i < n; i++)
        if (strcmp(people[i].name, people[last].name) > 0)
            last = i;

    printf("name %s\n", people[last].name);
    printf("addr %s\n", people[last].addr);
    printf("city %s\n", people[last].city);
    return 0;
}
