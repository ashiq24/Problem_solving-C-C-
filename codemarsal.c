#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int a, t, b, c, n, i, j=1, k, mx=0, cnt=0;
    scanf("%I64d", &t);
    while(t){
        mx=0;cnt=0;
        scanf("%I64d", &n);
        for(i=0;i<n-1;i++){
            scanf("%I64d %I64d", &a, &b);
            cnt+=(a-b);
            if(cnt>mx){
                mx=cnt;
            }
        }
        printf("Case %I64d: %I64d\n", j, mx);
        j++;
        t--;
    }


    return 0;
}
