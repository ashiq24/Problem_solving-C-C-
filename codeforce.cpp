#include<cstdio>
#include<cstring>
#include <algorithm>
#include <iostream>
using namespace  std;
int main()
{
    long long ara[100000];
    long long sum=0;
    int a,b,c,d,m;
    scanf("%d",&a);
    for(m=0;m<a;m++)
    {
        scanf("%I64d",&ara[m]);
        sum+=ara[m];
    }
    if(sum%2==0)
    {
        cout<< sum;
        return 0;

    }
    else
    {
        sort(ara,ara+sizeof(ara)/sizeof(ara[0]));
        int n=0;
        while(sum%2==1)
        {
            sum-=ara[n];
            n++;

        }
        cout<< sum;
    }



}
