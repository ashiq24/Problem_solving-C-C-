#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
char output[100050][10];
using namespace std;
int main()
{
    unsigned int a=2;
    a=~a;
    printf("%u",a);
     return 0;


}
