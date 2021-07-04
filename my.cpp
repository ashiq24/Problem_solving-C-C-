#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
#define MAXN 100000
int calc(int a,int b)
{
     queue<int> q;
     int top;
     q.push(a);
     bool color[MAXN]={false};
     int level[MAXN]={0};

     color[a]=true;
     while(!q.empty()){
          top=q.front();
          q.pop();
          if(top==b) return level[b];
          if(top>1 && color[top-1]==false){
               q.push(top-1);
               color[top-1]=true;
               level[top-1]=level[top]+1;
          }
          if(top<b && color[top<<1]==false){
               q.push(top<<1);
               color[top<<1]=true;
               level[top<<1]=level[top]+1;
          }

     }
     return level[b];
}







int main()
{
     int a,b,c,d;
     scanf("%d%d",&a,&b);
     cout<<calc(a,b)<<endl;
     return 0;
}
