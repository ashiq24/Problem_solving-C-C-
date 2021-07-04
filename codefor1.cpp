#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    long long a,b,c,d;
    int aa,ba,ca,flag=1;
    char s1[1000000];
    a=0;
    scanf("%d",&aa);
    while(aa)
    {
        char s[1000000];
        scanf("%s",s);
        if(s[0]=='0') flag=0;
        else{
                int c=0;
            for(int i=0;i<strlen(s);i++)
            {
                c+=(int)s[i]-48;
            }
            if(c>1 && flag!=0 )
            {flag =2;strcpy(s1,s);}
            else a=a+(strlen(s)-1);
        }
        aa--;
    }
    if(flag==0) printf("0");
    else
    {
        if(flag!=2) printf("1");
        else printf("%s",s1);
        for(int i=0;i<a;i++) printf("0");

    }

    return 0;
}
