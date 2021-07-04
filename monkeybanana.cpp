#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
#define mx(i,j) (i)>(j) ? (i) : (j)
int m;
int rr[501][501];
int man[501][501];
int rec(int i,int j)
{
    if(i==(2*m-1))
    {
        return man[i][1];
    }
    else if(man[i][j]==-1) return -1000000;
    else
    {
        if(rr[i][j]!=-1) return rr[i][j];
        else
        {
            if(i<m)
            {
                int m=-100000;
                m=max(m,rec(i+1,j)+man[i][j]);
                m=max(m, rec(i+1,j+1)+man[i][j]);
                rr[i][j]=m;
                return rr[i][j];
            }
            else{
               int m=-100000;
                m=max(m,rec(i+1,j)+man[i][j]);
                m=max(m, rec(i+1,j-1)+man[i][j]);
                rr[i][j]=m;
                return rr[i][j];
            }
        }
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    for(int n=1;n<a+1;n++)
    {
        int r;
        memset(man,-1,sizeof(man));
        memset(rr,-1,sizeof(rr));
        scanf("%d",&r);
        m=r;
        for(int r=1;r<=2*m-1;r++)
        {
            int k;
            if(r<=m) k=r;
            else  k=m-(r-m);
            for(int o=1;o<=k;o++)
            {
                scanf("%d",&man[r][o]);
            }
        }
        printf("Case %d: %d\n",n,rec(1,1));

    }







return 0;
}
