#include <stdio.h>
#include <string.h>
char input_id[11];
int input_code;

typedef struct {
    char name[11];
    int code;
} Product;

int main() {
    scanf("%10s %d", input_id, &input_code);

    Product p1 = {"codetree", 50};
    Product p2;
    strcpy(p2.name, input_id);
    p2.code = input_code;

    printf("product %d is %s\n", p1.code, p1.name);
    printf("product %d is %s\n", p2.code, p2.name);
    return 0;
}
