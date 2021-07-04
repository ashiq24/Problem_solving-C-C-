#include<stdio.h>
#include<string.h>
int main()
{
     int b1,b2,b3,g1,g2,g3,c1,c2,c3,a,b,c;
     int sum[6];
     char bot[6][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};
     while((scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3))==9)
     {
          sum[0]=b2+b3+c1+c3+g1+g2;
          sum[1]=b2+b3+g1+g3+c1+c2;
          sum[2]=c2+c3+b1+b3+g1+g2;
          sum[3]=c2+c3+g1+g3+b1+b2;
          sum[4]=g2+g3+b1+b3+c1+c2;
          sum[5]=g2+g3+c1+c3+b1+b2;
          b=-1;
          c=2147483647;
          for(a=0;a<=5;a++)
          {
               if(sum[a]<c)
               {
                    c=sum[a];
                    b=a;
               }
          }
          printf("%s %d\n",bot[b],sum[b]);
     }
     return 0;
}
