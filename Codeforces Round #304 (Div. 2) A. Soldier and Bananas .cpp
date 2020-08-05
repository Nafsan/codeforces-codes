#include<stdio.h>
int main()
{
    int n,k,w,i,j=0,ans;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++){
        j+=k*i;
    }
    ans=j-n;
    if(ans<0)ans=0;
    printf("%d\n",ans);
}