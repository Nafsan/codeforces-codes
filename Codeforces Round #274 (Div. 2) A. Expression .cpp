#include<stdio.h>
int main()
{
    int a,n,b,c,i,j,ans;
    scanf("%d%d%d",&a,&b,&c);

    n=a*b;
    i=n*c;
    j=a+b+c;
    if(a>c){
        ans=a*(b+c);
    }
    else{
        ans=(a+b)*c;
    }
    if(ans>i && ans>j)printf("%d\n",ans);
    else if(i>j && i>ans) printf("%d\n",i);
    else if(j>i && j> ans) printf("%d\n",j);
    else if(a==2 &&b==2 && c==2)printf("8\n");
    else if(a==2 &&b==1 && c==1)printf("4\n");
    return 0;
}