#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<char>q;
    stack<char>s;
    int n,cnt=0,flag,med;
    cin>>n;
    char str[n],str2[n];
    cin>>str;
    if(n%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(i%2==0)q.push(str[i]);
            else s.push(str[i]);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                s.push(str[i]);
            }
            else q.push(str[i]);
        }
    }
    while(!s.empty())
    {
        char c=s.top();
        s.pop();
        cout<<c;
    }
    while(!q.empty())
    {
        char c=q.front();
        q.pop();
        cout<<c;
    }
    puts("");
}