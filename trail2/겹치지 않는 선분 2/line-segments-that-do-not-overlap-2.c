#include <stdio.h>
int n;
int x1[100], x2[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int crossed = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            // 아래쪽(y=0)과 위쪽(y=1)에서 순서가 뒤바뀌면 두 선분은 교차함
            if ((x1[i] < x1[j]) != (x2[i] < x2[j])) {
                crossed = 1;
                break;
            }
        }
        if (!crossed)
            cnt++;
    }
    printf("%d\n", cnt);
    
    return 0;
}
