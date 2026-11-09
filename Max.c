
#include <stdio.h>

int main()
{
    int n,nr,max;
    scanf("%d",&n);
    if (n) {
        scanf ("%d",&nr);
        max=nr;
    for (int i=1;i<n;i++) {
        scanf ("%d",&nr);
        if (nr>max) max=nr;
    }
    printf ("Max is %d",max);
    }
    else
    printf ("No maximum");
}