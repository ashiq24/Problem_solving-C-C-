#include<stdio.h>
#define sum(a,b,c)\
{\
    for(c=0;c<b;c++)\
    {\
        printf("%c",*(a+c));\
    }\
}
int main()
{
     int a,b,c;
     char s[]="ifammad\0";
     sum(s,5,c);
     return 0;

}

