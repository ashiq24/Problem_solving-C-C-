#include<cstdio>
using namespace std;
int com(char a1[6], char a[6][6] )
{
     int b,c,d,e,f,g,h;
     b=0;
     for(c=0;c<6;c++)
     {
          if(a1[0]==a[c][0] && a1[1]==a[c][1])
          {
               for(d=2;d<6;d++)
               {
                    if(a1[2]=a[c][d])
                    {
                         e=d;
                         f=2;
                         h=1;
                         while(f<6)
                         {
                              if(a1[f]!=a[c][e])
                              {
                                   h=0;
                                   break;
                              }
                              e=e+1;
                              f=f+1;
                              if(e==6) e=2;
                         }
                    }
                    if(h==1)
                    {
                         b=1;
                         break;
                    }
               }
          }
          if(b==1) break;
     }
     return b;
}


int main()
{
     char c1,c2,c3,c4,c5,c6,c11,c12,c13,c14,c15,c16;
     char ak[13];
     while(gets(ak)!=NULL)
     {
          char ara[6][6],ara1[6][6];
          int a,b,c,d,e;
         c1= ak[0];
         c2=ak[1];
         c3=ak[2];
         c4=ak[3];
         c5=ak[4];
         c6=ak[5];
         c11=ak[6];
         c12=ak[7];
         c13=ak[8];
         c14=ak[9];
         c15=ak[10];
         c16=ak[11];
          ara[0][0]=c1;
          ara[0][1]=c6;
          ara[0][2]=c2;
          ara[0][3]=c4;
          ara[0][4]=c5;
          ara[0][5]=c3;
          ara[1][0]=c2;
          ara[1][1]=c5;
          ara[1][2]=c4;
          ara[1][3]=c1;
          ara[1][4]=c3;
          ara[1][5]=c6;
          ara[2][0]=c3;
          ara[2][1]=c4;
          ara[2][2]=c1;
          ara[2][3]=c5;
          ara[2][4]=c6;
          ara[2][5]=c2;
          ara[3][0]=c4;
          ara[3][1]=c3;
          ara[3][2]=c1;
          ara[3][3]=c2;
          ara[3][4]=c6;
          ara[3][5]=c5;
          ara[4][0]=c5;
          ara[4][1]=c2;
          ara[4][2]=c1;
          ara[4][3]=c4;
          ara[4][4]=c6;
          ara[4][5]=c3;
          ara[5][0]=c6;
          ara[5][1]=c1;
          ara[5][2]=c2;
          ara[5][3]=c3;
          ara[5][4]=c5;
          ara[5][5]=c4;
          ara1[0][0]=c11;
          ara1[0][1]=c16;
          ara1[0][2]=c12;
          ara1[0][3]=c14;
          ara1[0][4]=c15;
          ara1[0][5]=c13;
          ara1[1][0]=c12;
          ara1[1][1]=c15;
          ara1[1][2]=c14;
          ara1[1][3]=c11;
          ara1[1][4]=c13;
          ara1[1][5]=c16;
          ara1[2][0]=c13;
          ara1[2][1]=c14;
          ara1[2][2]=c11;
          ara1[2][3]=c15;
          ara1[2][4]=c16;
          ara1[2][5]=c12;
          ara1[3][0]=c14;
          ara1[3][1]=c13;
          ara1[3][2]=c11;
          ara1[3][3]=c12;
          ara1[3][4]=c16;
          ara1[3][5]=c15;
          ara1[4][0]=c15;
          ara1[4][1]=c12;
          ara1[4][2]=c11;
          ara1[4][3]=c14;
          ara1[4][4]=c16;
          ara1[4][5]=c13;
          ara1[5][0]=c16;
          ara1[5][1]=c11;
          ara1[5][2]=c12;
          ara1[5][3]=c13;
          ara1[5][4]=c15;
          ara1[5][5]=c14;
          if(com(ara1[0],ara)==1) printf("TRUE\n");
          else printf("FALSE\n");
     }
     return 0;
}



