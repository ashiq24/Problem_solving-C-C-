#include<stdio.h>
#include<conio.h>
int a1[4][11],a2[4]={0,1,0,0};
int N;
void tower(int n, int ta1,int ta2,int ta3 )
{
     if(n==1)
     {
            int k,l;
         a1[ta2][++a2[ta2]]=a1[ta1][a2[ta1]];
         a2[ta1]--;
         for(k=1;k<=3;k++)
         {
              printf("{");
              for(l=1;l<=N;l++)
              {
                   if(a1[k][l]==0) break;
                   else printf("%d",a1[k][l]);
              }
              printf("}");
         }
         printf("\n");
         return;
     }
     tower(n-1,ta1,ta3,ta2);
     {
          int k,l;
         a1[ta2][++a2[ta2]]=a1[ta1][n];
         a2[ta1]--;
         for(k=1;k<=3;k++)
         {
              printf("{");
              for(l=1;l<=N;l++)
              {
                   if(a1[k][l]==0) break;
                   else printf("%d",a1[k][l]);
              }
              printf("}");
         }
         printf("\n");
         return ;
     }
     tower(n-1,ta3,ta2,ta1);
}

int main()
{
     int a,b,c;
     scanf("%d",&a);
     N=a;
     c=a;
     a2[1]=a;
     for(b=1;b<=a;b--)
     {
          a1[1][b]=c;
          c--;
     }
     tower(a,1,2,3);
     return 0;
}
