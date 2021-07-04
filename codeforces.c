#include<stdio.h>
int bfs(int ara[501][501],int i,int j)
{
	int sum,m,sn,o,p;
	sum=0;
	sn=0;
	for(m=0;m<j;m++)
	{
		if(ara[i][m]==1)
		{
			sum=sum+1;
		}
		if(ara[i][m]==0)
		{
			if(sum>sn) sn=sum;
			sum=0;
		}
	}
	if (sum>sn ) sn=sum;
	return sn;
}
int main()
{
	int sum,sn,n,m,i,j,q,a,b,c;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&q);
	int ara[501][501];
	for(a=0;a<n;a++)
	{
		for(b=0;b<m;b++)
		{
			scanf("%d",&ara[a][b]);
		}
	}
	sum=0;
    sn=0;

    for(c=0;c<q;c++)
	{
		scanf("%d",&i);
		scanf("%d",&j);
		if(ara[i-1][j-1]==0) ara[i-1][j-1]=1;
		else ara[i-1][j-1]=0;
		//printf("%d",ara[i-1][j-1]);
		sum=0;
        sn=0;
        for(a=0;a<n;a++)
        {
                sum=bfs(ara,a,m);
                if(sum>sn) sn=sum;
                sum=0;
        }
        printf("%d\n",sn);
	}
    return 0;
}



