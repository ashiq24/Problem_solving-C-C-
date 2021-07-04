#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<map>
using namespace std;
int ara[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string bar[7]={ "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
int main()
{
    map<string,int> code;
    for( int n=1;n<=7;n++)
    {
        code[bar[n-1]]=n;

    }
    for( int n=0;n<12;n++)
       {
           ara[n]=(ara[n]%7);
           //cout<<ara[n];

       }

    string fst,las;
    cin>>fst>>las;
    int i=code[fst];
    int j=code[las];
   // cout<<i<<j;
    for( int n=0;n<12;n++)
    {
       if(j%7==((i+ara[n])%7))
       {

           cout<<"YES";
           return 0;
       }
    }


    cout<<"NO"<<endl;
    return 0;



}
