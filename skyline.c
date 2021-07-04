#include<stdio.h>
int main()
{
     int a,b,c,d,x1,x2,h,maxx,minx;
     int ara[10001];
     for(a=0;a<10001;a++)
     {
          ara[a]=0;
     }
     maxx=-1;
     minx=200000;
     while(scanf("%d %d %d",&x1,&h,&x2)==3)
     {
          if(maxx<x2) maxx=x2;
          if(minx>x1) minx=x1;
          for(a=x1;a<x2;a++)
          {
               if(ara[a]<h) ara[a]=h;
          }
     }
     d=0;
     for(a=minx;a<=maxx;a++)
     {
          if(d!=ara[a])
          {
               d=ara[a];
               printf("%d ",a);
              if(a!=maxx) printf("%d ",d);
              else printf("%d\n",d);
          }
     }
     return 0;
}
