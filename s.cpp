#include<cstdio>
using namespace std;
int abs(int k)
{
     if (k<0)   return k*-1;
     else   return k;
}
struct pii
{
	int a;
	int b;
};
int main()
{
	int a1,b1,c,d,e,f,g,sum;
	scanf("%d",&a1);
	while(a1>0)
	{
		scanf("%d",&b1);
		pii ara[501][501];
		for(c=1;c<=b1;c++)
		{
			for(d=1;d<=b1;d++)
			{
				scanf("%d",&e);
				if(e%b1==0)
				{
					f=(int) e/b1;
					ara[f][b1].a=c;
					ara[f][b1].b=d;
				}
				else
				{
					f=(int) e/b1;
					ara[f+1][e%b1].a=c;
					ara[f+1][e%b1].b=d;

				}

			}
		}
		sum=0;
		f=0;
		g=0;
		for(c=1;c<=b1;c++)
		{
			for(d=1;d<=b1;d++)
			{
				if(c==1 && d==1)
				{
					f=ara[c][d].a;
					g=ara[c][d].b;
				}
				else
				{
					sum=sum+abs(ara[c][d].a-f)+abs(ara[c][d].b-g);
					f=ara[c][d].a;
					g=ara[c][d].b;

				}
			}
		}
		printf("%d\n",sum);
		a1=a1-1;

	}
	return 0;
}
