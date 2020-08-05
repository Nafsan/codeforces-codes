#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q1;
    queue<int>q2;
    queue<int>q3;
    int n,ara[100009],m,a,b,x,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>m;
        if(m==1)q1.push(i);
        else if(m==2)q2.push(i);
        else q3.push(i);
    }
    a=min(q1.size(),q2.size());
    x=q3.size();
    b=min(a,x);
    printf("%d\n",b);
    for(int i=0;i<b;i++)
    {
        printf("%d %d %d\n",q1.front(),q2.front(),q3.front());
        q1.pop();
        q2.pop();
        q3.pop();
    }

}