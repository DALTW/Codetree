#include <stdio.h>
typedef struct {
    char code_name;
    int score;
} User;
User users[5];
int main(){
    int i;
    for(i = 0; i < 5; i++){
        scanf(" %c %d", &users[i].code_name, &users[i].score);
    }

    int minIdx = 0;
    for (i = 1; i < 5; i++)
        if (users[i].score < users[minIdx].score)
            minIdx = i;

    printf("%c %d\n", users[minIdx].code_name, users[minIdx].score);

    return 0;
}
