#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#define mod 1000
using namespace std;
int sive[5000];
int letter[27];
//int first[1000000];
//char names[100000][33];
struct scor{
     int s1;
     int s2 ;
};
void seive(int ara[],int ara2[])
{
     for(int i=2;i<5000;i++)
     {
          if(ara[i]==0)
          {
               for(int k=2*i;k<5000;k=k+i) ara[k]=1;
          }
     }
     int k=0;
     for(int i=900;i<5000;i++)
     {
          if(ara[i]==0)
          {
               ara2[k]=i;
               k++;
               if(k>26) break;
          }

     }
}
int enco(char ara[])
{
     int k=1,m,m1=1;
     for(int i=0; i< strlen(ara); i++)
     {
          m= (int)ara[i]- int ('a')+1;
          if(i!=0) m1=(int)ara[i-1]-int('a')+1;
          k=k+(i*letter[m]*letter[m1]*strlen(ara)*k)%10000 ;
          k=k %10000;
     }
     return k;
}
int getnext(int a, int x)
{
     a=(a+(x*x)) % 10000;
     return a;
}
int main()
{
     int a,b,c,n,m,o,p,height=0,num,u;
     seive(sive ,letter);
     int   score[10001]={0},visit[10001]={0};
     vector < int > lst;
     //for(int i=0;i<1001;i++) score[i]=0.1;
     int S1[1001],S2[1001];
     char name[33],names[10001][33];
     scanf("%d",&u);
     for(b=0;b<u;b++)
     {
          scanf("%s %d",name,&c);
          n=enco(name);
          if(visit[n]==1)
          {
               if(strcmp(name,names[n])==0)
               {
                    score[n]=score[n]+c;
                    S1[b]=score[n];
                    S2[b]=n;
               }
               else
               {
                    int inc=1;
                    while(visit[n])
                    {
                         n=getnext(n,inc);
                         inc++;
                    }
                    visit[n]=1;
                    score[n]=score[n]+c;
                    strcpy(names[n],name);
                    S1[b]=score[n];
                    S2[b]=n;

               }
          }
          else
          {
               visit[n]=1;
               score[n]=score[n]+c;
               strcpy(names[n],name);
              // printf("%d %d\n",n,score[n]);
               S1[b]=score[n];
               S2[b]=n;
          }
     }
     height=score[0];
     lst.push_back(0);
     for( m=01;m<=10000; m++)
     {
          if(visit[m] && height < score[m])
          {
               lst.clear();
               height=score[m];
               lst.push_back(m);
          }
          else if(visit[m]  &&  height==score[m]){ lst.push_back(m);}// printf("h-%d",m);}
     }
     //printf("height  %d\n",height);
   //  for(int y =0;y<lst.size();y++) printf("ary--%d\n",lst[y]);
     for(m=0;m<u;m++)
     {
         // printf("n%d\n",n);
          if(height<=S1[m])
          {
               //printf("s1%d\n",S1[m]);
               for(int y=0;y< lst.size();y++)
               {
                    if(S2[m]==lst[y])
                    {
                         //printf("33%d\n",n);
                         //printf("55--%d\n",n);
                         num=lst[y];
                         //printf("L-%d\n",num);
                          printf("%s",names[num]);
                          return 0;
                         break;
                    }
               }
          }
     }
     //printf("%s",names[num]);
     return 0;
}
