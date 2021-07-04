#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,k,n,j,flag,time;
    scanf("%d",&a);
    scanf("%d",&b);
    time=0;
    k=b;
    for(c=1;c<=b;c++)
    {
        int ara[100002];
        scanf("%d",&d);
        for(j=1;j<=d;j++) scanf("%d",&ara[j]);
        if(ara[1]==1)
        {
            for(n=1;n<d;n++)
            {
                if(ara[n+1]-ara[n]==1) ;
                else
                {
                    time=time+d-n;
                    k=k+(d-n);
                    break;
                }

            }
        }
        else
        {
            time=time+d-1;
            k=k+d-1;

        }

    }
    time=time+k-1;
    printf("%d",time);
    return 0;






}
