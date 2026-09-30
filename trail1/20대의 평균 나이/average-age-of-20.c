#include <stdio.h>

int main() {
    int a;
    int j = 0;
    int sum = 0;

    while(1)
    {
        scanf("%d", &a);

        if(a < 20 || a>=30)
        {
            if(j!=0)
            {
                double k = (double) j;
                printf("%.2lf",sum/k);
                break;
            }
            else
            {
                printf("00.00");
            }
        }
        

        sum+=a;
        j++;
    }
    return 0;
}