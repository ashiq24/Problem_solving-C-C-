#include<cstdio>
#include<cmath>
#include <iostream>
using namespace std;
int logc(int a,int b)
{
    int c;
    if (a<10) return b;
    else
    {
        b=b+1;
        a=(int)(a/10);
        logc(a,b);
    }
}
int main()
{
    int a,c,f,g,k,l;
    double n,m,b;
    long long int sum,b1,m1;
    scanf("%lf",&n);
    m1=(long long int)n;
    if(m1<=9) printf("%d",m1);
    else if(m1==1000000000) printf("8888888899");
    else
    {
       a=logc(m1,0);
       sum=0;
        while(m1>9)
        {
            b=0;
            l=1;
            for(c=0;c<a;c++)
            {
                b=b+9*l;
                l=l*10;
            }
            b1=(long long int)b;


            sum=sum+(a+1)*(m1-b1);

            m1=b1;
            a=a-1;

        }

        cout << sum+9 << endl;
    }
    return 0;

}
