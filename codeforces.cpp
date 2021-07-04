#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
using namespace std;
int visit[200001];
int visited[200001];
long long modular(int base, unsigned int exp)
{
    long long int  x = 1;
    int i;
    long long int  power = base % 1000000007;

    for (i = 0; i < sizeof(int) * 8; i++) {
        int least_sig_bit = 0x00000001 & (exp);
        if (least_sig_bit)
            x =( (x %1000000007)*( power%1000000007)) % 1000000007;
        power = ((power % 1000000007)* (power% 1000000007)) % 1000000007;
        exp=exp>>1;
    }

    return x;
}
int main()
{
    int a,b,c,d,n=1;
    long long m=1,ans;
    int ara[200001]={0},ara1[200001];
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        int i;
        scanf("%d",&ara1[b]);
        m*=ara1[b];
        ara[ara1[b]]++;
    }
    for(b=0;b<a;b++)
    {
        if(visit[ara1[b]]==0)n*=(ara[ara1[b]]+1);
        visit[ara1[b]]=1;
    }
    m=(int)m%1000000007;
    ans=modular(m,n/2);
     if(n%2==1)
    {
        for(b=0;b<a;b++)
        {
            if(visited[ara1[b]]==0)
            {
                ans=((ans%1000000007)*(modular(ara1[b],ara[ara1[b]]/2))%1000000007) %1000000007;
                visited[ara1[b]]=1;
            }
        }
    }
    printf("%d",ans);
    return 0;

}

