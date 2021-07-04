#include<cstdio>
#include<vector>
#include<conio.h>
#include<iostream>
using namespace std;
vector < int > v;
struct node
{
    int cry;
    int gocry;
    int confi;
};
int main()
{
    int a,b,c,n,d,f;
    node ara[4000];

    scanf("%d",&a);
    for(  n=0 ;n<a; n++)
    {
        scanf("%d %d %d",&ara[n].cry,&ara[n].gocry,&ara[n].confi);
    }
    int con=0,flag=-1;
    int sub[4000]={0};
    for( n=0 ; n<a ; n++)
    {
        int k=0;
        ara[n].confi=ara[n].confi-con;
        while(k<=flag)
        {
			if( sub[k]>0 )
			 {
				ara[n].confi=ara[n].confi-sub[k];
				sub[k]--;
			}
			k++;
        }
        if( ara[n].confi>=0)
        {
            v.push_back(n+1);
			flag++;
            sub[flag]=ara[flag].cry;
           // printf("%d %d\n",flag,ara[n].confi);
        }
        else
        {
            con=con+ara[n].gocry;
        }
    }
	printf("%d\n",flag+1);
    for(n=0 ; n<=flag ;n++  ) printf("%d ",v[n]);
	getch();
    return 0;
}
14
11 100 70
11 7 29
47 6 115
65 77 158
30 94 46
13 81 295
61 35 245
50 31 354
34 5 133
89 37 379
26 55 212
48 65 347
47 5 515
74 75 106
