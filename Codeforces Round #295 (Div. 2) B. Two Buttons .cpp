#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    if(n>m)printf("%d\n",n-m);
    else{
        while(n<m)
        {
            if(m%2==0)
            {
                m/=2;
            }
            else m++;
            cnt++;
        }
        int ans= cnt+n-m;
        printf("%d\n",ans);
    }
}