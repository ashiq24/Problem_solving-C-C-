#include<stdio.h>
int main()
{
     int a,b,c,d,e,f,g,sum,min,bb;
     int ara[2][100001];
     scanf("%d",&a);
     ara[0][0]=0;
     ara[1][0]=0;
     sum=0;
     bb=0;
     for(b=1;b<=a;b++)
     {
          scanf("%d",&ara[0][b]);
          if(ara[0][b]==0) sum=sum+1;
     }
     ara[0][a+1]=0;
     ara[1][a+1]=0;
     c=0;
     while(!(sum==a))
     {
          f=c%2;
          g=(c+1)%2;
          for(d=1;d<=a;d++)
          {
               if(ara[f][d]==0) ara[g][d]=0;
               else
               {
                    if(ara[f][d+1]==0 || ara[f][d-1]==0)
                    {
                         sum=sum+1;
                         ara[g][d]=0;
                       // printf("%d %d %d %d\n",c,d,f,sum);
                        if(sum==a)
                         {
                              bb=1;
                              break;
                         }
                    }
                    else
                    {
                         if (ara[f][d+1] <ara[f][d-1]) min=ara[f][d+1];
                         else min=ara[f][d-1];
                         if(ara[f][d]<=min)
                         {
                              ara[g][d]=ara[f][d]-1;
                              if(ara[g][d]==0)
                              {
                              sum=sum+1;
                            //   printf("%d %d %d\n",c,d,sum);
                               }
                              if(sum==a)
                         {
                              bb=1;
                              break;
                         }
                         }
                         else
                         {
                               ara[g][d]=min;
                              if(ara[g][d]==0)
                              {
                                   sum=sum+1;
                            //   printf("%d %d\n",sum);
                              }
                              if(sum==a)
                         {
                              bb=1;
                              break;
                         }
                         }

                    }
               }
          }

           c=c+1;
           if(bb==1) break;
     }
     printf("%d",c);
     return 0;

}
