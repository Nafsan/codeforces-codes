#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m!=-1)flag+=m;
        else if(m==-1 && flag==0)cnt++;
        else if(m==-1 &&flag!=0)flag--;
    }
    printf("%d\n",cnt);
}