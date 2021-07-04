#include<cstdio>
using namespace std;
int main()
{
    int a;
    scanf("%d",&a);
    for(int n=1;n<=a;n++)
    {
     int a1,b1,flag=0,cont=0,value=1,pos;
     scanf("%d",&a1);
     b1=a1;
     while(b1)
     {
         int s;
         cont++;
         s=b1%2;
         b1=b1/2;
         if(s==1 && !flag){
                flag=1;
                pos=cont;
                if(b1==0)
             {
                 a1=a1<<1;
                 flag=2;
                 break;
             }
         }
         if(flag==1)
         {
             if(s==0)
             {
                 a1=(b1<<cont)+(1<<cont-1)+(1<<(cont-pos)-1);
                 flag=2;
                 break;
             }

         }

     }
     if(flag==1) {a1=(1<<(cont))+(a1>>pos);}
     printf("Case %d: %d\n",n,a1);

    }
    return 0;
}
