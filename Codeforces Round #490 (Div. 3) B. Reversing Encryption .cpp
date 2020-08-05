#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s, int index)
{
    for(int i=0;i<index/2;i++)swap(s[i],s[index-i-1]);
}
int main()
{
    string str;
    int n,ara[100],j=0;
    cin>>n;
    cin>>str;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)ara[j++]=i;
    }
    for(int i=0;i<j;i++)
    {
        reverseString(str,ara[i]);
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}