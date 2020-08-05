#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,m,p;
    scanf("%d%d",&n,&t);
    int ans=240-t;
    if(ans<5)printf("0\n");
    else{
            int sum=0;
        for(i=1;i<=n;i++)
        {
            ans-=5*i;
            if(ans<0)break;
            sum++;
        }
        printf("%d\n",sum);
    }
}