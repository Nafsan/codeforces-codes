#include<bits/stdc++.h>
using namespace std;
stack<int>s;
stack<int>s2;

int main()
{
    long long int n,flag=1;
    cin>>n;
    while(n>0)
    {
        int w=n%10;
        if(w==4||w==7)s.push(w);
        n/=10;
    }
    int len=s.size();
//    int flag=0;
    while(len>0)
    {
        int w=len%10;
        if(w==4||w==7)s2.push(w),flag=0 ;
        else
        {
            flag=1;
            break;
        }
        len/=10;
    }
    if(flag==1)printf("NO\n");
    else printf("YES\n");
}
 