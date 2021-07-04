#include<stdio.h>
#include <conio.h>
int tow[4][10], t[4]={1,1,1,1};
int N;
void tower( int n, int t1 ,int t2, int t3)
{
	if(n==1)
	{
		int a,b;
		t[t1]--;
		tow[t2][t[t2]]=tow[t1][t[t1]];
		t[t2]++;
		for(a=1;a<=3;a++)
		{
			printf("{");
			for(b=1;b<t[a];b++) printf("%d",tow[a][b]);
			printf("}");
		}
		printf("\n");
		//printf("move form %d to %d\n" ,t1 , t2);
		return ;
	}
	tower(n-1, t1 ,t3 ,t2);
	{
		int a,b;
		t[t1]--;
		tow[t2][t[t2]]=tow[t1][t[t1]];
		t[t2]++;
		for(a=1;a<=3;a++)
		{
			printf("{");
			for(b=1;b<t[a];b++) printf("%d",tow[a][b]);
			printf("}");
		}
		printf("\n");
	}
	//printf("mpve from %d to %d\n",t1 , t2);
	tower(n-1, t3 ,t2 , t1);

}
int main()
{
	int a,b,c;
	scanf("%d",&a);
	N=a;
	t[1]=a+1;
	c=a;
	for(b=1;b<=a;b++)
	{
		tow[1][b]=c;
		c--;
	}
	for(b=1;b<=3;b++)
	{
		printf("{");
		for(c=1;c<t[b];c++) printf("%d",tow[b][c]);
		printf("}");
	}
	printf("\n");
	tower(a,1 , 3, 2 );
	getch();
	return 0;
}
