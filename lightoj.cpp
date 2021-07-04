#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
#include<cstring>
using namespace std;
struct mmar{
    int x;
    int y;
    int val;
};
bool com(mmar i, mmar j)
{
    return i.val<j.val;
}
int main()
{
    int a;
    cin>> a;
    for( int n=1;n<=a;n++)
    {
        mmar mar[1000]={0,0,0};
        int visx[10000]={0};
        int visy[10000]={0};
        int b,c,d;
        cin>> b;
        int cot=0;
        for(int i=1;i<=b;i++)
        {
            for( int j=1;j<=b;j++)
            {
                int t;
                cin>> t;
                mar[cot].val=t;
                mar[cot].x=i;
                mar[cot].y=j;
                cot++;

            }
        }
        sort(mar,mar+cot,com);
        int sum=0;
        for(int l=cot-1;l>=0;l--)
        {
           // cout<< mar[l].val;
            if(visx[mar[l].x]==0 && visy[mar[l].y]==0)
            {
                sum+=mar[l].val;
                visx[mar[l].x]=1;
                visy[mar[l].y]=1;
            }
        }
        printf("Case %d: %d\n",n,sum);
    }

}

