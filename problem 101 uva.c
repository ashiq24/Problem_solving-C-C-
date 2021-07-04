#include<stdio.h>
#include<string.h>
void move(int ara[30][30],int a,int m)
 {
     int b,c;
     for(b=m+1;b<30;b++)
     {
         if(ara[a][b]==-1) return ;
         else
         {
             ara[ara[a][b]][0]=ara[a][b];
             ara[a][b]=-1;
         }
     }
     return ;
 }
 void over(int ara[30][30],int a,int c,int a1,int c1)
 {
     int b,d;
     for(b=c;b<30;b++)
     {
         if(ara[a][b]==-1) break;
     }

     for(d=c1;d<30;d++)
     {
         if(ara[a1][d]==-1) break;
         else
         {
            ara[a][b] = ara[c][d];
            //ara[c][d]=-1;
            b=b+1;
         }
     }
 }
int main()
{
    int a,b,c,d,e,f,e1,f1,m,n1,n2,g;
    int ara[30][30];
    char s1[10],s2[10],s11[]="move",s12[]="pile",s21[]="over ",s22[]="onto",ff[]="quit";
    memset(ara,-1,sizeof(ara));
    for(b=0;b<30;b++) ara[b][0]=b ;
    scanf("%d",&m);
    scanf("%s",s1);
    while(strcmp(s1,ff)!=0)
    {
        scanf("%d",&n1);
        scanf("%s",s2);
        scanf("%d",&n2);
        for(e=0;e<30;e++)
        {
            for(f=0;f<30;f++) if(ara[e][f]==n1) break;
        }
        if(strcmp(s1,s11)==0) move(ara,e,f);
        for(e1=0;e1<30;e1++)
        {
            for(f1=0;f1<30;f1++) if(ara[e1][f1]==n2) break;
        }
        if(strcmp(s2,s22)==0) move(ara,e1,f1);
        over(ara,e1,f1,e,f);
        scanf("%s",s1);
    }
    for(d=0;d<m;d++)
    {
        printf("%d: ",d);
        for(e=0;e<=m;e++)
        {
            if(ara[d][e]==-1) break;
            else printf("%d",ara[d][e]);
        }
        printf("\n");
    }






    return 0;

}
