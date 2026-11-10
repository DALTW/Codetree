#include <stdio.h>

void printLines(int n) {
    for (int i = 0; i < n; i++)
        printf("12345^&*()_\n");
}

int main() {
    int row_num;
    scanf("%d", &row_num);
    printLines(row_num);
    return 0;
}
