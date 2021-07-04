#include<stdio.h>
int main()
{
    int i,j,max,min,n,a1,b1,a2,b2;
    scanf("%d",&i);
    scanf("%d",&j);
    if(i>j) max=i;
    else max=j;
    min=i*j/max;
    scanf("%d",&a1);
    scanf("%d",&b1);
    scanf("%d",&a2);
    scanf("%d",&b2);
    n=1;
    if(a1+a2<=max)
    {
        if(b1<=min && b2<=min) {printf("YES");n=0;}
    }
    if(a1+a2<=min && n!=0)
    {
        if(b1<=max && b2<=max) {printf("YES");n=0;}
    }
     if(a1+b2<=max && n!=0)
    {
        if(b1<=min && a2<=min) {printf("YES");n=0;}
    }
    if(a1+b2<=min && n!=0)
    {
        if(b1<=max&& a2<=max) {printf("YES");n=0;}
    }
     if(b1+a2<=max && n!=0)
    {
        if(a1<=min && b2<=min) {printf("YES");n=0;}
    }
    if(b1+a2<=min && n!=0)
    {
        if(a1<=max && b2<=max) {printf("YES");n=0;}
    }
     if(b1+b2<=max && n!=0)
    {
       if(a1<=min && a2<=min) {printf("YES");n=0;}
    }
    if(b1+b2<=min && n!=0)
    {
       if(a1<=max && a2<=max) {printf("YES");n=0;}
    }
    if(n==1) printf("NO");
}

