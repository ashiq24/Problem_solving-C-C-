#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
     int a,b,c;
     vector  <  vector <  int  > > vec;
     vector < int > ve[100];
     vector < int > row,col;
     scanf("%d",&a );
     ve[0].push_back(a);
     ve[0].push_back(a+1);
      ve[0].push_back(a+2);
      ve[3].push_back(a+200);
      ve[3].push_back(a+201);
      ve[1].push_back(a+100);
      ve[1].push_back(a+99);
     vec.push_back(row);
     vec.push_back(col);
     c=ve[0].size();
     printf("%d",c);
     return 0;
}
