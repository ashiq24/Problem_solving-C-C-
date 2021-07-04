#include<cstdio>
#include<algorithm>
using namespace std;
struct pit
{
    int fst;
    int sec;
};
bool cmp(pit a,pit b)
{
    return a.sec<b.sec;
}
int main ()
{
    int n,np,sp,i,j,k,x,y,l,m,sum1,sum2,area;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       pit ara[100010];
       ara[0].fst=0;
       ara[0].sec=0;
       scanf("%d",&np);
       for (j=1;j<=np;j++)
       {
           scanf("%d",&sp);
           int ax[sp+3];
           int ay[sp+3];
           for(k=1;k<=sp;k++)
           {
               scanf("%d",&x);
               scanf("%d",&y);
               ax[k]=x;
               ay[k]=y;

           }
           ax[sp+1]=ax[1];
           ay[sp+1]=ay[1];
           sum1=0;
           sum2=0;
           for (l=1;l<=sp;l++)
           {
               sum1=sum1+ax[l]*ay[l+1];
               sum2=sum2+ay[l]*ax[l+1];
           }
           area=sum1-sum2;
           ara[j].fst=j;
           if(area>0) ara[j].sec=area;
           else  ara[j].sec=area*-1;




       }
       sort(ara,ara+(np+1),cmp);
       for(m=1;m<=np;m++)
       {
        for(l=1;l<=np;l++)
        {
            if(m==ara[l].fst) printf("%d ",l-1);
        }
       }
    }





}
