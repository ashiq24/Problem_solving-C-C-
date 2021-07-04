#include<stdio.h>
#include<string.h>
#define mn(i,j)   (i)>(j) ? (i) : (j)
int visit[100001];
int main()
{
     int a,b,c,d,k,max=0,flag=0,n;
     int ara[100001],ara2[100001],result[10000];
     scanf("%d%d",&a,&n);
     for(c=1;c<=a;c++)
     {
          scanf("%d",&d);
          ara[d]=c;
          max=mn(max,d);
          visit[d]++;
     }
     for(c=0;c<n;c++)
     {
          scanf("%d",&k);
          if( visit[k]==0)
          {
               printf("Impossible");
               return 0;
          }
          else
          {
               if(visit[k]>1) flag=1;
               ara2[c]=ara[k];
          }
     }


     if(flag==1) printf("Ambiguity");
     else
     {
          printf("Possible\n");
          for(c=0;c<n;c++) printf("%d ",ara2[c]);
     }
     return 0;

}
