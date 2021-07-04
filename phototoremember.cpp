#include<cstdio>
#include<iostream>
using namespace std;
int ara[200000];
int ara2[200000];
int main()
{
    long long area,w,sw=0,l;
    int a,b,c,d,mx,mx2;
    scanf("%d",&a);
    mx=0;
    mx2=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d %d",&ara2[i],&ara[i]);
        sw+=ara2[i];
        if(mx<=ara[i])
        {
            mx2=mx;
            mx=ara[i];
        }
        else if(mx2<ara[i] ) mx2=ara[i];
    }
    for(int i=0;i<a;i++)
    {
        if(ara[i]==mx) cout << mx2*(sw-ara2[i]);
        else cout << mx*(sw-ara2[i]);
        printf("\n");
    }
    return 0;
}
