#include<stdio.h>
#include<math.h>
#include<conio.h>
int rec(int i)
{
     if(i==1) return 1;
     if(i==2) return 1;
     else return (sqrt(rec(i-1))+sqrt(rec(i-2)))*(sqrt(rec(i-1))+sqrt(rec(i-2)));
}
int main()
{
     int a,b,c;
     scanf("%d",&a);
     printf("%d",rec(a));
     getch();
     return 0;
}

