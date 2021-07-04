#include <iostream>
#include<cstdio>
#include <algorithm>
using namespace std;
struct dimen
{
     int a1;
     int n;
     };
bool com(dimen w,dimen q)
{
	return w.a1<=q.a1;
}

int main() {
	int a,b,c,d,e,f,l1,lmax,pos,nea,flag;
	dimen ara[30][30];
	while(scanf("%d %d",&a,&b)==2)
	{
		for(c=0;c<a;c++)
		{
			for(d=0;d<b;d++)
			{
				scanf("%d",&ara[d][c].a1);
				ara[d][c].n=c+1;
			}
		}
		for(c=0;c<b;c++)
		{
			sort(ara[c],ara[c]+a,com);
		}
		for(c=0;c<b;c++)
		{
			for(d=0;d<a;d++)
			{
				printf("%d",ara[c][d].n);
			}
               printf("\n");
		}
		pos=-1;
		lmax=0;
		l1=0;
		nea=-1;
		for(c=0;c<a;c++)
		{
		     flag=-1;
			for(d=0;d<b-1;d++)
			{
				if(ara[d][c].n==ara[d+1][c].n)  flag=1;
				else
				{
				     flag=-1;
				     break;
				}
			}
		//	printf("f %d\n",flag);
			if(flag==1)
			{
			     if(nea==-1) nea=c;
			     else
			     {
			          l1=l1+1;
			        //  printf("l1 %d\n",l1);
			     }

			}
			else if(flag==-1)
			{
			     if(nea==-1) nea=-1;
			     else
			     {
			          if(lmax<l1)
			          {
			               pos=nea;
			               lmax=l1;
			          }
			     }
			     nea=-1;
			     l1=0;
			}
			 if(c==a-1)
			     {
			          if(flag==1)
			          {
			               if(lmax<l1)
			               {
			                    pos=nea;
			                    lmax=l1;
			               }
			          }
			     }
		}
		//printf("%d %d\n",pos,lmax);
		for(f=pos;f<=pos+lmax;f++)
		{
		     printf("%d",ara[0][f].n);
		}
		printf("\n");
	}

	return 0;
}
