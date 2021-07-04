#include<cstdio>
#include<cstring>
using namespace std;
struct node
{
     int x;
     char srt[21];
};
node ara[2000][2001];
int main()
{
     int a,b,c,d,e,flag,cot=0;
     char s[21],s1[21];
     scanf("%d",&a);
     for(b=0;b<a;b++)
     {
          scanf("%s %s",s,s1);
          flag=0;
          for(c=0;c<cot;c++)
          {
               if(strcmp(ara[c][ara[c][0].x].srt,s)==0)
               {
                    strcpy(ara[c][ara[c][0].x+1].srt,s1);
                    ara[c][0].x++;
                    flag++;
               }
          }
          if(flag==0)
          {
               ara[cot][0].x=2;
               strcpy(ara[cot][1].srt,s);
               strcpy(ara[cot][2].srt,s1);
               cot++;
          }
     }
     printf("%d\n",cot);
     for(e=0;e<cot;e++)
     {
          printf("%s %s\n",ara[e][1].srt,ara[e][ara[e][0].x].srt);

     }
     return 0;

}
