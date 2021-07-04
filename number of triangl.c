#include<stdio.h>
long int fac[200]
long int fac(int a)
{
     long int b;
     if(a==0 ) return 1;
     else{
               b=1;
          while(a>0)
          {
               b=b*a;
               a=a-1;
          }
          return b;
     }
}
int main()
{
     int a,b,c,d,e,f;
     long int sum;

     while(scanf("%d %d",&a,&b)==2)
     {
           if(a==0 && b==0  ) break;
           else
           {
                e=(a+1)*(b+1);
               if(a==0 || b==0) printf("0\n");
          else if(a+1<3 || b+1<3)
          {

               if(a+1<3 && b+1<3 ) printf("4\n");
               else if(a+1<3)
               {
                    sum=(fac(e)/(6*fac(e-3)))-2*fac(b+1)/(fac(b+1-3)*6);
                    printf("%ld\n",sum);
               }
               else
               {
                    sum=(fac(e)/(6*fac(e-3)))-2*fac(a+1)/(fac(a+1-3)*6);
                    printf("%ld\n",sum);
               }

          }
          else
          {
               a=a+1;
               b=b+1;
               f=a+b-5;


          }
           }

     }






}
