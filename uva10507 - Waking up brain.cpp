#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
     int a;
     while((scanf("%d",&a))==1)
     {

          int d,e,f,n,g,h,flag,a1,a2,a3,l;
          char w1,w2,w3,b,c,k;
           scanf("%d",&n);
          k='A';
          vector < int > v[130];
          queue < int > q;
          int ara[130];
          char aaa[3],aa[2];
          memset(ara,0,sizeof(ara));
          scanf("%s",&aaa);
          a1= (int)(aaa[0]);
          a2=(int)(aaa[1]);
          a3=(int)(aaa[2]);
         // printf("%d  %d%d",a1,a2,a3);
          ara[a1]=1;
          ara[a2]=1;
          ara[a3]=1;
          for(d=1;d<=n;d++)
          {
               scanf("%s",&aa);
               a1=(int)(aa[0]);
               a2=(int)(aa[1]);
              // printf("%d\n",d);
              // printf("%d %d\n",a1,a2);
               v[a1].push_back(a2);
               v[a2].push_back(a1);
          }
          e=3;
          l=0;
          while(1)
          {
            //   printf("%d",a);
              //  printf("%d\n",l);
               if(e==a)
               {
                    printf("WAKE UP IN, %d, YEARS\n",l);
                    break;
               }
               h=0;
               for(d=63;d<130;d++)
               {
                    flag=0;
                    if(ara[d]!=1)
                    {
                         for(g=0;g<v[d].size();g++)
                         {
                              if(ara[v[d][g]]==1) flag=flag+1;
                              if(flag==3)
                              {
                                   q.push(d);
                                  // printf("w %d\n",d);
                                   h=h+1;
                                   e=e+1;
                                   break;
                              }
                         }
                    }
               }
               if(h==0 )
               {
                    printf("THIS BRAIN NEVER WAKES UP\n");
                    break;
               }
               while(!q.empty())
               {
                    ara[q.front()]=1;
                    q.pop();
               }
              // printf("q %d\n",q.front());
               l=l+1;
          }

     }
     return 0;
}


