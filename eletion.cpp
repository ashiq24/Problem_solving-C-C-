#include <cstdio>
#include<cstring>
#include<algorithm>
#include <iostream>
using namespace std;
bool com(int a,int b)
{
    if(a>=b) return true;

}

int main(void) {
	int ara[1000];
	int a,b,c,d,e;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&ara[b]);
	}
	c=0;
	sort(ara+1,ara+a,com);

	for(b=a-1;b<=1;b--)
	{

		if(ara[b]>ara[0])
		{
			if((ara[b]-ara[0])%2==0)
			{
				c=c+(ara[b]-ara[0])/2+1;
				ara[0]=ara[0]+(ara[b]-ara[0])/2+1;
			}
			else if((ara[b]-ara[0])%2!=0)
			{
				c=c+(ara[b]-ara[0]+1)/2;
				ara[0]=ara[0]+(ara[b]-ara[0]+1)/2;
			}
		}
		else if(ara[b]==ara[0])
		{
			c=c+1;
			ara[0]=ara[0]+1;
		}
      printf("%d %d\n",ara[0],c);
	}
	printf("%d",c);

	return 0;
}
