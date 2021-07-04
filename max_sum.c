#include<stdio.h>
int ara[1000000];
int maxx(int ara[1000000],int a)
{
     int b,c,sum;
     sum=0;
     for(b=0;b<a;b++)
     {
          if(b>0) ara[b]=ara[b]+ara[b-1];
          if(ara[b]>sum) sum=ara[b];
     }
     for(b=1;b<a;b++)
     {
          for(c=b;c<a;c++)
          {
               if(sum<(ara[c]-ara[b-1]) )sum=ara[c]-ara[b-1];
          }
     }
     return sum;
}
int main()
{
     int a,b,c,d,e,f,g,h,k,tsum,sum;
     scanf("%d ",&a,&k);
     for(b=0;b<a;b++)
     {
               scanf("%d",&ara[b]);

     }
     tsum=-127;
     sum=0;

     {
          for(b=1;b<a;b++)
          {
               ara[b][c]=ara[b][c]+ara[b-1][c];
          }

     }
     g=0;
     while(g<a)
     {
          for(b=g;b<a;b++)
          {
               for(c=0;c<a;c++)
               {
                    if(g==0)ara2[c]=ara[b][c];
                    else
                    {
                         ara2[c]=ara[b][c]-ara[g-1][c];
                    }
               }
              tsum=maxx(ara2,a);
              if (tsum>sum) sum=tsum;
          }
          g=g+1;
     }
     printf("%d\n",sum);
     return 0;

}
