#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,a6,aa,tn;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    scanf("%d",&a4);
    scanf("%d",&a5);
    scanf("%d",&a6);
    aa=a2+((a1+a3)/2);
    tn=((aa+a2)*a1)+((aa+a5)*a4);
    printf("%d",tn);
    return 0;

}
