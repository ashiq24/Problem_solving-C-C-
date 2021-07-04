#include<stdio.h>
#include<math.h>
int main()
{
     int c,f,g;
    long double  a,b,n,k;
     scanf("%d",&c);
     while(c>0)
     {
          scanf("%Ld %Ld %Ld",&a,&b,&k);
          n=(-((2*a)-b)+sqrt((2*a-b)*(2*a-b)+4*b*2*k))/(2*b);
          g=(int) n;
          printf("%d",g);
          c=c-1;
     }
     return 0;
}
