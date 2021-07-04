#include<stdio.h>
int main()
{
     int a,b,c,d,e,a1,x1,sum;
     scanf("%d",&a);
     int ara[20000];
     while(a>0)
     {
          scanf("%d %d",&b,&c);
          a1=0;
          x1=0;
          for(d=0;d<c;d++)
          {
               scanf("%d",&ara[d]);
               if(ara[d]==1) x1=x1+1;
               else a1=a1+1;
          }
          if(x1>=a1  ) sum=(a1-1)+(int)((x1-a1+2)/2);
          else sum=a1-1;
          printf("%d\n",sum);
          a=a-1;
     }
     return 0;
}
