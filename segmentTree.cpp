#include<bits/stdc++.h>
using namespace std;
int tree[100001];
void update(int idx, int x, int n) //n is the size of the array, x is the number to add
{
       while(idx<=n)
       {
             tree[idx]+=x;
             idx += idx & (-idx);
       }
}
int query(int idx){
       int sum=0;
       while(idx>0){
             sum+=tree[idx];
             idx -= idx & (-idx);
       }
       return sum;
}
int main()
{
    int ara[100001];
    int siz;
    cin>>siz;
    for(int n=1;n<=siz; n++)
        cin>>ara[n];
    int t;
    cin>>t;
    while(t)
    {
        t--;
        int i,j;
        cin>>i>>j;
        update(i,1,siz);
        update(j+1,-1,siz);
    }
    for( int n=1;n<=siz;n++)
    {
        if(query(n)%2!=0)
        {
            swap(ara[n],ara[siz-n+1]);
        }

    }
    for( int n=1;n<=siz;n++)cout<<ara[n]<<" ";
    return 0;

}
