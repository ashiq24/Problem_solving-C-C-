#include<cstdio>
#include<iostream>
using namespace std;
struct point
{
	int fst;
	int sec;
};
int sq(int a)
{
	if(a>0 && a<=3) return 3;
	if (a>3 && a<=6) return 6;
	else return 9;
}
int error(point ara[10][10], int i,int j)
{
	int a,b,c,d,f;
	for(a=1;a<=9;a++)
	{
		if (a!=j)
		{
			if (ara[i][j].sec==ara[i][a].sec) return 0;
		}
		if(a!=i)
		{

			if(ara[i][j].sec== ara[a][j].sec) return 0;
		}
	}
	for(b=sq(i)-2;b<=sq(i);b++)
	{
		for(c=sq(j)-2;c<=sq(j);c++)
		{
			if(b!=i && c!=j)
			{
				if(ara[b][c].sec == ara[i][j].sec) return 0;
			}
		}
	}
	return 1;
}

int main()
{

    int cas;
    cin>>cas;
    for( int coos=1;coos<=cas;coos++)
    {
        int a,b,c,d,e,f,g,h,i,j;
        point  ara[10][10];
        char cc;
        for(a=1;a<=9;a++)
        {
            for(b=1;b<=9;b++)
            {
                cin>>cc;
                if(cc=='.')
                {
                    ara[a][b].fst=0;
                    ara[a][b].sec=0;
                }
                else{
                    ara[a][b].fst=1;
                    ara[a][b].sec=(int)c-(int)'0';
                    cout<<ara[a][b]<<endl;
                }
            }
        }
       /* scanf("%d",&c);
        while(c>0)
        {
            scanf("%d",&e);
            scanf("%d",&f);
            scanf("%d",&g);
            ara[e][f].fst=1;
            ara[e][f].sec=g;
            c=c-1;
        }*/
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                if(ara[i][j].fst==0)
                {
                    ara[i][j].sec=ara[i][j].sec+1;
                    while( error( ara,i,j)==0)
                    {
                        ara[i][j].sec=ara[i][j].sec+1;
                        if(ara[i][j].sec>9) break;
                    }
                    if(ara[i][j].sec>9)
                    {
                        if(j==1)
                        {
                            ara[i][j].sec=0;
                            i=i-1;
                            j=8;
                            while (ara[i][j+1].fst==1)
                            {
                                j=j-1;
                            }
                        }
                        else
                        {
                            ara[i][j].sec=0;
                            j=j-2;
                            while (ara[i][j+1].fst==1)
                            {
                                j=j-1;
                                if(j==-1)
                                {
                                    i=i-1;
                                    j=8;

                                }
                            }
                        }
                    }
                }
            }
        }

        for(i=01;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                printf("%d",ara[i][j].sec);
                //if(j%3==0) printf("  ");
            }
            printf("\n");
            //if(i%3==0) printf("\n");
        }
    }




	return 0;
}

/*
32
1 1 5
1 2 3
2 1 6
3 2 9
3 3 8
1 5 7
2 4 1
2 5 9
2 6 5
3 2 9
3 3 8
3 8 6
4 1 8
4 5 6
4 9 3
5 1 4
5 4 8
5 6 3
5 9 1
6 1 7
6 5 2
6 9 6
7 2 6
7 7 2
7 8 8
8 4 4
8 5 1
8 6 9
8 9 5
9 5 8
9 8 7
9 9 9
http://paste.ubuntu.com/11808088/  */

