#include<stdio.h>
int main()
{
    int a,b,c,d,e,min;
    int aa[10002];
    scanf("%d",&a);
    c=0;
    min=10000000;
    for(d=0;d<a;d++)
    {
        scanf("%d",&aa[d]);
        if(min>aa[d]) min=aa[d];
    }
    if(min==1) printf("-1");
    else printf("1");
    return 0;
}
