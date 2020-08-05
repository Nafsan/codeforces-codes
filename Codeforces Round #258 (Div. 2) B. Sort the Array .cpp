#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,ara[1000009],ara2[1000009];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        ara2[i]=ara[i];
    }
    sort(ara2,ara2+n);
    int a,b;
    for(int i=0;i<n;i++)
    {
        if(ara[i]==ara2[i])continue;
        else{
            a=i;
            break;
        }
    }
    for(int i=n-1;i>a;i--)
    {
        if(ara[i]==ara2[i])continue;
        else{
            b=i;
            break;
        }
    }
    reverse(ara+a,ara+b+1);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]!=ara2[i] ){
            flag=0;
            break;
        }
        else flag=1;
    }
    if(flag==0)printf("no\n");
    else printf("yes\n%d %d\n",a+1,b+1);
}

/*
5
69 37 27 4 2
*/