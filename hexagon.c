#include<stdio.h>
int main()
{
     int a,b,c,d,f;
     float sum1,sum2,sum;
     float a1[6],a2[6],a3[6];
     a=0;
     while(a<6)
     {
          scanf("%f",&a3[a]);
          a++;
     }
     a1[0]=0;
     a2[0]=0;
     a1[1]=a3[0];
     a2[1]=0;
     a1[2]=a1[1]+0.5*a3[1];
     a2[2]=a2[1]+a3[1];
     a1[3]=a1[2]- .5*a3[2];
     a2[3]=a2[2]+a3[2];
     a1[4]=a1[3]-a3[3];
     a2[4]=a2[3];
     a1[5]=a1[4]-.5*a3[4];
     a2[5]=a2[4]-a3[4];
     sum1=0;
     sum2=0;
     for(b=0;b<5;b++)
     {
          sum1=sum1+(a1[b]*a2[b+1]);
          sum2=sum2+(a2[b]*a1[b+1]);
     }
     sum=(sum1-sum2);
     c=(int)sum;
     printf("%d",c);
     return 0;

}
