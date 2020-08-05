#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,sum = 0;
    cin>>a>>b>>c>>d>>e>>f;
    for(int i=b;i>
    0;i--)
    {
        a+=i;
        if(i==d)a-=c;
        else if(i==f)a-=e;
        if(a<0)a = 0;
    }
    cout<<a<<endl;
}