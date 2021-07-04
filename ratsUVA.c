#include<stdio.h>
int ara[1025][1025];
int suum(int ara[1025][1025],int a,int b,int c)
{
    int d,e,f,g,sum;
    sum=0;
    for(d=a;d<a+c;d++)
    {
        for(e=b;e<b+c;e++)
        {
            sum=sum+ara[d][e];
        }
    }
    return sum;
}
int main()
{
    int a,b,c,d,e,f,j,l,k,o,p,mac,mic,mar,mir,sum;
    scanf("%d",&a);
    while(a>0)
    {
        for(d=0;d<=1025;d++)
    {
        for(e=0;e<=1025;e++)
        {
            ara[d][e]=0;
        }
    }

        mac=mar=0;
        mic=mir=1000000;
        scanf("%d",&c);
        c=c*2;
        scanf("%d",&b);
        for(d=1;d<=b;d++)
        {
                scanf("%d",&e);
                if(mar<e) mar=e;
                if(mir>e) mir=e;
                scanf("%d",&f);
                if(mac<f) mac=f;
                if(mic>f) mic=f;
                scanf("%d",&ara[e][f]);

        }
        sum=0;
        for(k=mir;k<=mar-c+1;k++)
        {
            for(o=mic;o<=mac-c+1;o++)
            {
              p=suum(ara,k,o,c);
              if(p>sum)
              {
                  sum=p;
                  e=k+(c/2);
                  f=o+(c/2);
              }
            }
        }
        printf("%d %d %d\n",e,f,sum);


    a=a-1;
    }
    return 0;
}
