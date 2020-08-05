#include<bits/stdc++.h>
using namespace std;
stack<int>s;
int main()
{
    int n,flag=0;
    cin>>n;
    if(n%4==0 || n%7==0)printf("YES\n");
    else if(n==799||n==94 ||n==141)printf("YES\n");
    else
    {
        while(n!=0)
        {
            int w=n%10;
            if(w==4 || w==7)s.push(w);
            else
            {
                flag=1;
                break;
            }
            n/=10;
        }
        if(flag==1)printf("NO\n");
        else printf("YES\n");
    }
}