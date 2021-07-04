#include<stdio.h>
int main()
{
     int a,b,c,x1,x2,y1,y2,n,m,l,max,min,mm1,mm2,sum;
     scanf("%d",&n);
     min=0;
     for(m=1;m<=n;m++)
     {
          scanf("%d %d %d %d %d %d %d",&a,&b,&c,&x1,&x2,&y1,&y2);
          if(a==0 && b!=0)
          {
               if(-c/b>=y1 && -c/b<=y2) sum=1;
          }
          else if(b==0 && a!=0)
          {
                if(-c/a>=x1 && -c/a<=x2) sum=1;
          }
          else if (a==0 && b==0 ) sum=0;
          else
          {
               mm1=(-y1*b-c)/a;
               mm2=(-y2*b-c)/a;
               printf("%d %d\n",mm1,mm2);
               if(mm1<=mm2)
               {
                    min=mm1;
                    max=mm2;
               }
               else
               {
                    min=mm2;
                    max=mm1;
               }
               if(min>x2 || max<x1) sum=0;
               else
               {
                    if(min<=x1) min=x1;
                    if(max>=x2) max=x2;
               }
               sum=max-min+1;

          }
          printf("%d\n",sum);


     }
}
