#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n;
    char str[1000009];
    cin>>str;
    stack<char>s;
    //s.push(str[0]);
    for(int i=0;i<n;i++)
    {
        if(s.empty())s.push(str[i]);
        else if(s.top()!=str[i]){
            s.pop();
        }
        else s.push(str[i]);
    }
    printf("%d\n",s.size());
}