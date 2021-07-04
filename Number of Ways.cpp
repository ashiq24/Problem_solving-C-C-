#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
long long ara[1000000]={0};
int main()
{
    int a,c,n,d,last=-1,m;
    long long  o,ans=0,con=0,b;
    scanf("%d %d",&n,&m);
    for(a=1;a<=n;a++)
    {
        cin >> b;
        if(a==1) ara[a]=b;
        else ara[a]=ara[a-1]+b;
    }
    for(a=0;a<m;a++)
    {
        int l,k;
        scanf("%d %d",&l,&k);
        ans+=ara[k]-ara[l-1];
        cout<<ans;
        printf("\n");
    }
    cout << ans;
    return 0;
}

