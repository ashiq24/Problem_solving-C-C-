#include<stdio.h>
int aa[1000000];
int find1(int ara[100000],int f,int a)
{
    int c,g,k;
    g=0;
     for(c=0;c<=a;c++)
    {
        if(ara[c]==f)
        {
            g=c;
            break;
        }
    }
    return g;
}
int find2(int ara[100000],int f,int a)
{
    int c,g,k;
    g=0;
     for(c=a;c>=0;c--)
    {
        if(ara[c]==f)
        {
            g=c;
            break;
        }
    }
    return g;
}

int main()
{
    int a,b,c,d,max,e,f,g,l;
    int ara[100002];
    for(c=0;c<=1000000;c++) aa[c]=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&ara[b]);
        aa[ara[b]]=aa[ara[b]]+1;
    }
    max=0;
    f=0;
    g=0;
    l=0;
    for(c=0;c<=1000000;c++)
    {
        if(max<aa[c])
        {
            max=aa[c];
            f=c;
        }
        else if(max==aa[c])
        {
            if(find2(ara,f,a)-find1(ara,f,a)>find2(ara,c,a)-find1(ara,c,a))
            {
                max=aa[c];
                f=c;
            }
        }
    }
    for(c=0;c<=a;c++)
    {
        if(ara[c]==f)
        {
            g=c;
            break;
        }
    }
    for(c=a;c>=0;c--)
    {
         if(ara[c]==f)
        {
            l=c;
            break;
        }
    }
    printf("%d %d",g,l);
    return 0;
}
