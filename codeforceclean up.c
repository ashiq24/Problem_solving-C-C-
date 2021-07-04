#include<stdio.h>
#include<string.h>
int no1(int a)
{
    int s,b,c;
    c=0;
    while(a!=0)
    {
        b=(int)(a/10);
        if(a-b*10==1 ) c=c+1;
        a=b;
    }
    return c;
}
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    char aa[110][110];
    for(b=0;b<a;b++)
    {
        scanf("%s",aa[b]);
    }
    e=0;
    for(b=0;b<a;b++)
    {
        d=0;
       for(c=0;c<a;c++)
       {
           if(strcmp(aa[b],aa[c])==0 ) d=d+1;
       }
       if(d>e) e=d;
    }
    printf("%d",e);
}
