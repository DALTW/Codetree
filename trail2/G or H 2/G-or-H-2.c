#include <stdio.h>
int positions[101];
char letters[101];
char line[101];   // line[x]: 위치 x에 선 사람의 팻말 (없으면 0)
int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %c", &positions[i], &letters[i]);
    }

    // 위치 순서대로 보기 위해 위치를 인덱스로 하는 배열에 옮김
    for (i = 0; i < n; i++)
        line[positions[i]] = letters[i];

    int max_size = 0;
    for (int s = 0; s <= 100; s++) {           // 왼쪽 끝 사람
        if (line[s] == 0) continue;
        int g = 0, h = 0;
        for (int e = s; e <= 100; e++) {       // 오른쪽 끝을 늘려 가며 확인
            if (line[e] == 'G') g++;
            else if (line[e] == 'H') h++;
            else continue;                     // 사람이 없는 위치는 끝이 될 수 없음

            if ((g == 0 || h == 0 || g == h) && e - s > max_size)
                max_size = e - s;
        }
    }
    printf("%d\n", max_size);
    
    return 0;
}
