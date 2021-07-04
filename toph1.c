#include<stdio.h>
int aa[1000001];
int main()
{
     int a,b,c,d,e;
    long int m,sum,m1,m2,m3;
     scanf("%d",&a);
     m1=a-1;
     m2=(m1*(m1+1))/2-1;
     m3=m1*(m1+1)-1;
     for(b=1;b<=a;b++)
     {
          scanf("%d",&aa[b]);
     }
     m=0;
     for(b=2;b<=a;b++)
     {
          if(b==2) m=m1*(aa[1]^aa[b]);
          else if(b=a) m=m1*(aa[1]^aa[b]);
          else if (b==a-1) m=m2*(aa[1]^aa[b]);
          else if (b==3) m=m2*(aa[1]^aa[b]);
          else if (b>=4) m=m3*(aa[1]^aa[b]);
          else m=m3*(aa[1]^aa[b]);
         printf("%d\n",m);
     }

     printf("%ld",m);
     return 0;
}
