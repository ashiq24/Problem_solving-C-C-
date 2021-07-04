#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,e;
    char ara[50];
    int aa[35];
    scanf("%s",&ara);
    for(b=1;b<=27;b++ ) aa[b]=0;
    for(b=0;b<strlen(ara);b++)
    {
        c=(int)(ara[b]);
        aa[c-96]=aa[c-96]+1;
    }

    e=0;
    for(b=1;b<=26;b++)
    {
        e=e+((strlen(ara)+1)-aa[b]);
    }
    printf("%d",e);
    return 0;
}
