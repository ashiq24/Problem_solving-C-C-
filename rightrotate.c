#include<stdio.h>
int getleft1bit( int a)
{
     int m=1,i;
     m=m<<((sizeof(int )*8)-1);
     for( i=(sizeof(int )*8);i>=1;i--)
     {
          if((m&a)!=0) return i;
          a=a<<1;
     }
     return 0;

}
void getbit(int a,int j)
{
     int m=1,i;
     m=m<<((sizeof(int )*8)-1);
     for( i=(sizeof(int )*8);i>=1;i--)
     {
          if(i<=j)
          {
          if((m&a)==0) printf("0 ");
          else printf("1 ");
          }
          a=a<<1;
          //if((33-i)%4==0) printf("  ");


     }
     printf("\n");
}

int main()
{
     int x,n,a,b,c,d,m,e,i;
     unsigned int xt;
     scanf("%d%d",&x,&n);
     i=getleft1bit(x);
     m=1<< (getleft1bit(x)-1);
      xt=(unsigned int) x;
     // getbit(xt,i);
     while(n>0)
     {

          a=xt & 1;
          xt=xt>> 1;
          if(a!=0) xt=xt|m;
         // getbit(xt,i);
          n--;
     }
     getbit(x,i);
     getbit(xt,i);
     return 0;

}
