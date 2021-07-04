#include<stdio.h>
#include<math.h>
void getbit(int a)
{
     int m=1,i;
     m=m<<((sizeof(int )*8)-1);
     for( i=(sizeof(int )*8);i>=1;i--)
     {
          if((m&a)==0) printf("0");
          else printf("1");
          a=a<<1;
          if((i+1-32)%2==0) printf(" 0 ");

     }
     printf("\n");
}
int count1bit( int a )
{
     int m=1,i,bitnum=0;
     m=m<<((sizeof(int )*8)-1);
     for( i=(sizeof(int )*8);i>=1;i--)
     {
          if((m&a)!=0) bitnum++;
          a=a<<1;
     }
     return bitnum;
}

int main()
{
     int  roll,sub,score,a,b,c,enco;
     unsigned int  un,un2,un1,un3;
     printf("press 1 for encoding and 2 for decoding\n");
     scanf("%d",&a);
     if(a==1)
     {
          scanf("%d%d%d",&roll,&sub,&score);
          enco=roll<<20;
          //getbit(enco);
          enco=enco|(sub<<17);
          enco=enco|(score<<1);
          if(count1bit(enco)%2!=0) enco=enco |1;
          printf("%d\n",enco);
          //getbit(enco);
     }
     if(a==2)
     {
          scanf("%d",&enco);
          if(count1bit(enco)%2!=0) printf("Error");
          else
          {
              un=(unsigned int) enco;
              un1=07777;
              un1=un1<<20;
              un2=7;
              un2=un2<<17;
              un3=127;
              un3=un3<<1;
              un1=un & un1;
              roll=un1>>20;
              un2=un & un2;
              sub=un2>> 17;
              //getbit(un3);
              un3=un & un3;
              score=un3>>1;
              printf("%d %d %d",roll,sub,score);
          }

     }

     return 0;
}

