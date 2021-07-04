#include<cstdio>
#include<cstring>
using namespace std;
long long dp[31][31];
long long rec(int i, int j)
{
    if(i>j ) return 0;
    else if(i==0) return 1;
    else if(dp[j][i]!=-1) return dp[j][i];
    else if(i==1)
    {
        long long k;
        dp[j][i]=j*j;
        return dp[j][i];
    }
    else
    {
        dp[j][i]=j*j*rec(i-1,j-1)/i;
        return dp[j][i];
    }

}
int main()
{
    int a,b,c,d;
    memset(dp,-1,sizeof(dp));
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d",&c,&d);
        printf("Case %d: %lld\n",b,rec(d,c));
    }
    return 0;
}
