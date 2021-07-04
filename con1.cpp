#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int f=0,g=0;
    for( int n=(int)(log2(num));n>=0;n=n-2 )
    {
        int m=1;
        m=m<<n;
        g=g|m;
    }
    if(g>num) cout<<g;
    else cout<<(1<<(int)((log2(num))+1));
    return 0;




}
