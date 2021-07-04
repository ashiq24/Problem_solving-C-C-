#include<stdio.h>
int ara[1000000];
int main()
{
     int a,b,c,d,e,f;
     scanf("%d %d",&a,&b);
     for(c=0;c<a;c++)
     {
          scanf("%d",&ara[c]);
          if(ara[c]%b==0)
          {
               printf("YES");
               f=-1;
          }
          if(c>0) ara[c]=ara[c]+ara[c-1];
     }
     c=-1;
     f=0;
     if(f!=-1)
     {
               while(c<a-1)
          {
               for(d=c+1;d<a;d++)
               {
                    if(c!=-1)
                    {
                         if((ara[d]-ara[c])%b==0)
                         {
                              printf("YES");
                              f=-1;
                              break;
                         }
                    }
                    else
                    {
                         if(ara[d]%b==0)
                         {
                              printf("YES");
                              f=-1;
                              break;

                         }
                    }
               }
               if(f==-1) break;
               c=c+1;
          }
          if(f==0) printf("NO");
     }
     return 0;
}
