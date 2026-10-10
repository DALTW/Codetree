#include <stdio.h>

int main() {
    char a[3];
    int b[3];

    for(int i = 0; i < 3; i++)
    {
        scanf(" %c %d",&a[i],&b[i]);
    }

    int acount = 0;
    int bcount = 0;
    int ccount = 0;
    int dcount = 0;

    for(int i = 0; i < 3; i++)
    {
        if(a[i] == 'Y' && b[i] >= 37)
        {
            acount++;
        }
        else if(a[i] == 'N' && b[i] >= 37)
        {
            bcount++;
        }
        else if(a[i] == 'Y' && b[i] < 37)
        {
            ccount++;
        }
        else
        {
            dcount++;
        }
    }

    if(acount >= 2)
    {
        printf("%d %d %d %d E",acount,bcount,ccount,dcount);
    }
    else
    {
        printf("%d %d %d %d",acount,bcount,ccount,dcount);
    }
    return 0;
}