#include<stdio.h>
#include<string.h>
int main()
{
     int a,b,c,d,num1,num2;
     num1=0;
     num2=0;
     scanf("%d %d",&a,&b);
     d=100;
     for(c=1;c<=3;c++)
     {
          num1=num1+(a%10)*d;
         a=(int)a/10;
         num2=num2+(b%10)*d;
         b=(int)b/10;
         d=d/10;
     }
   if(num1>num2)  printf("%d",num1);
   else  printf("%d",num2);
    return 0;
}
