#include<cstdio>
#include<cstring>
using namespace std;
#define mn(i,j) (i)<(j)? (i) : (j)
int main()
{
    int a;
    scanf("%d",&a);
    FILE *fp;
    fp=fopen("my.txt","w");
    for( int n=1;n<=a;n++)
    {
        int c, v,m,mx=0,y=0;
        int pos[2001]={0};
        int ind[2001]={0};
        scanf("%d",&c);
        scanf("%d",&m);
        for( int fo=1;fo<=m;fo++)
        {
            scanf("%d",&v);
            if(v<=c)
            {
                if(mx<v)mx=v;
                if( pos[v]==-1 )
                {
                    if(c/v==2)
                    {
                        pos[v]=fo;

                    }
                }
                else if(pos[v]==0)
                {
                    pos[v]=-1;
                    ind[v]=fo;
                }
            }
        }
        for( int l=0;l<=mx && !y;l++)
        {
            if(ind[l]!=0)
            {
                if(pos[l]==-1)
                {
                    if(pos[c-l]==-1)
                    {
                        if( ind[l]< ind[c-l])
                        {
                            int m=ind[l], nm=ind[c-l];
                            fprintf(fp,"Case #%d: %d %d\n",n,m,nm);
                            y=1;
                        }
                        else
                        {
                             int nm=ind[l], m=ind[c-l];
                             fprintf(fp,"Case #%d: %d %d\n",n,m,nm);
                            y=1;
                        }


                    }
                }
                else
                {
                    fprintf(fp,"Case #%d: %d %d\n",n,ind[l],pos[l]);
                    y=1;
                }
            }
        }
    }
    fclose(fp);
    return 0;
}
