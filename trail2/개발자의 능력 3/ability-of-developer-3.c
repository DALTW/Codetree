#include <stdio.h>
#include <stdlib.h>
int arr[6];
int main() {
    for (int i = 0; i < 6; i++)
        scanf("%d", &arr[i]);
    
    int total = 0;
    for (int i = 0; i < 6; i++)
        total += arr[i];

    int min_diff = -1;
    // 한 팀에 들어갈 3명 (i, j, k)를 고르면 나머지 3명이 다른 팀
    for (int i = 0; i < 6; i++)
        for (int j = i + 1; j < 6; j++)
            for (int k = j + 1; k < 6; k++) {
                int team1 = arr[i] + arr[j] + arr[k];
                int team2 = total - team1;
                int diff = abs(team1 - team2);
                if (min_diff == -1 || diff < min_diff)
                    min_diff = diff;
            }

    printf("%d\n", min_diff);
    
    return 0;
}
