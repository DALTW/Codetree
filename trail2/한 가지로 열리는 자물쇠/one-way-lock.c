#include <stdio.h>
#include <stdlib.h>
int n, a, b, c;
int main() {
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    
    int cnt = 0;
    for (int x = 1; x <= n; x++)
        for (int y = 1; y <= n; y++)
            for (int z = 1; z <= n; z++)
                if (abs(x - a) <= 2 || abs(y - b) <= 2 || abs(z - c) <= 2)
                    cnt++;

    printf("%d\n", cnt);
    
    return 0;
}
