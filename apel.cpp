#include <iostream>
#include <math.h>

using namespace std;

int i(int j)
{

    if(j==0) return 1;
    else return (2+j%2)*i(j-1);
}
int main()
{

    cout<<i(2);
}
