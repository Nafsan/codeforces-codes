#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,cnt,flag=0;
    cin>>a>>b>>n;
    for(int i=0; i<=9; i++)
    {
        cnt=a*10+i;
        if(cnt%b==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d",cnt);
        for(int i=0;i<n-1;i++)cout<<0;
        puts("");
    }
    else printf("-1\n");

}