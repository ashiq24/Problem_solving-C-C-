#include<stdio.h>
#include<string.h>
int main()
{
    int a,n,m,o,max,flg;
    scanf("%d",&a);
    for(n=0;n<a;n++)
    {
        max=0;
        char col[7][10];
        char com[10];
        scanf("%s",col[0]);
        scanf("%s",col[1]);
        scanf("%s",col[2]);
        scanf("%s",col[3]);
        scanf("%s",col[4]);
        scanf("%s",col[5]);
        for(m=0;m<6;m++)
        {
            flg=0;
            for(o=0;o<6;o++)
            {
                if(strcmp(col[m],col[o])==0) flg=flg+1;
            }
            if(flg>max) max=flg;
        }
        if(max>=3 ) printf("YES\n");
        else printf("NO\n");
    }
}
