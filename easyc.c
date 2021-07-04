#include<stdio.H>
int main()
{
     int a,b=1,c,d,e;
     int ara[100001];
     scanf("%d",&a);
     while(b<=a)
     {
          scanf("%d",&c);
          ara[c]=b;
          b++;
     }
     for(c=1;c<=a-1;c++)
     {
          if(ara[c]-ara[c+1]==1) continue;
          else
          {
               if(ara[c+1]==a) continue ;
               else
               {
                    printf("%d",a-c);
                    return 0;
               }


          }

     }
     return 0;
}
