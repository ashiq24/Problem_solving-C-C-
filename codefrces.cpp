#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,tn,a,b,c,d,f;
	int na[330];
	char nn[303][330];
	scanf("%d",&n);
	for(a=1;a<=n;a++) scanf("%d",&na[a]);
	for(a=0;a<n;a++)
	{
		scanf("%s",nn[a]);
		//printf("%s\n",nn[a]);
	}
	for(a=0;a<n;a++)
	{
		for(b=0;b<n;b++)
		{
			if( nn[a][b]=='1')
			{
				if(a<b)
				{
					if(na[a+1]>na[b+1])
					{

						tn=na[a+1];
						na[a+1]=na[b+1];
						na[b+1]=tn;
						//printf("%d %d\n",a,na[a+1]);
					}
				}
				if(a>b)
				{
					if(na[b+1]>na[a+1])
					{
						tn=na[b+1];
						na[b+1]=na[a+1];
						na[a+1]=tn;
					}
				}

			}


		}
	}
	for(a=1;a<=n;a++) printf("%d ",na[a]);
	return 0;

}


