#include<stdio.h>
int main()
{
    int a,b,c,f,n1,n2,m1,m2,sum;
    int ara[110][110];
    for(b=0;b<=109;b++)
    {
       for(c=0;c<=109;c++) ara[b][c]=0;
    }
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
      scanf("%d",&m1);
      scanf("%d",&n1);
      scanf("%d",&m2);
      scanf("%d",&n2);
      for(f=n1;f<=n2;f++)
      {
          for(c=m1;c<=m2;c++) ara[f][c]=ara[f][c]+1;
      }


    }
    sum=0;
    for(b=0;b<=109;b++)
    {
       for(c=0;c<=109;c++) sum=sum+ara[b][c];
    }
    printf("%d",sum);
    return 0;
}
