#include<stdio.h>
#include<conio.h>
char per[27];
int v[27];
int r;
int m;
void permu( int i,int k)
{
    if( r==m ) return;
     if(i==k)
     {
          int k1;
          for(k1=0;k1<k;k1++) printf("%c",per[k1]);
          printf("\n");
          r++;
          return ;
     }
     else
     {
          int m=0;
          for(m=0;m<k;m++)
          {
               if(v[m]==0)
               {
                    per[i]=(int)'A'+m;
                    v[m]=1;
                    permu(i+1,k);
                    v[m]=0;
               }
          }
     }
}
int main()
{
     int a,b,c,d,e;
     scanf("%d",&a);
     for(b=1;b<=a;b++)
     {
         scanf("%d%d",&c,&d);
         r=0;
         m=d;
         printf("Case %d:\n",b);
         permu(0,c);

     }
     return 0;

}
