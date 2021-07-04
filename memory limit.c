#include<stdio.h>
int main()
{
    int n,m,n1,m1,p,q,sum,prem;
    scanf("%d",&n);
    for (m=0;m<n;m++)
    {
       scanf("%d",&n1);
       scanf("%d",&p);
       sum=p;
       prem=p;
       for(m1=0;m1<n1-1;m1++)
       {
          scanf("%d",&q);
          if(q>=prem)
          {
              sum=sum+(q-prem);
              prem=prem+(q-prem);
          }
          else
          {
            prem=prem+(q-prem);
          }
       }
       printf("%d\n",sum);
    }

    return 0;
}
