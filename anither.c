#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void hanui(int n,int a, int b, int c )
{
	if(n==1)
	{
		printf("move from %d to %d\n",a,c);
	}
	else
	{
		hanui(n-1,a,c,b);
		printf("move from %d to %d\n",a,c);
		hanui(n-1,b,a,c);
		return ;
	}

}
int doit(int m)
{
	static int n=10;
	if(m)doit(m-1);
	printf("%d\n",n++);
	return 0;
}
int main()
{
	 int  mat[3][3]={
		{1,2,3},
		{2,3,1},
		{3,2,1}
	};
	int n,m,a,b;
	printf("%d\n",**(mat+2));
	for( n=0;n<3;n++)
	{
		for(m=0;m<3;m++) printf("%d\n",*(mat+m+n*3));
	}
	getch();
	return 0;

}
