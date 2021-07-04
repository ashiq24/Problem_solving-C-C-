#include<stdio.h>
#include<string.h>
int main()
{
     int a,b,amax,amin,bmax,bmin,l,u,flag,ta,tb;
     scanf("%d",&u);
     scanf("%d %d",&a,&b);
     printf("%d\n",a+b);
     amax=a;
     amin=a;
     bmax=b;
     bmin=b;
     u=u-1;
     flag=0;
     while(u>0)
     {
          if(flag==0)
          {
           scanf("%d %d",&a,&b);
          if(amax<a) amax=a;
          else if (amin>a) amin=a;
          if(bmax<b) bmax=b;
          else if (bmin>b) bmin=b;
          if((amin+bmax)>(amax+bmin) )printf("%d\n",amin+bmax);
          else printf("%d\n",amax+bmin);
          flag=1;
          }
          else
          {
                scanf("%d %d",&a,&b);
                if(a<amin)
                {
                     ta=a;
                     a=amin;
                     amin=ta;
                }
                if(a>amax)
                {
                     ta=a;
                     a=amax;
                     amax=ta;
                }

               if(b<bmin)
                {
                     tb=b;
                     b=bmin;
                     bmin=tb;
                }
                if(b>bmax)
                {
                     tb=b;
                     b=bmax;
                     bmax=tb;
                }
                if(a+b>=amin+bmax && a+b>=amax+bmin) printf("%d\n",a+b);
                else if(a+b<=amin+bmax && amin+bmax >=amax+bmin) printf("%d\n",amin+bmax);
                else if (amax+bmin>=amin+bmax && a+b<=amax+bmin)  printf("%d\n",amax+bmin);
          }
          u=u-1;
     }


     return 0;

}
