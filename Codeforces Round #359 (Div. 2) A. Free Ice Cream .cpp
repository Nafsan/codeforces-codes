#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m;
    int x[100000];
    char str;
    cin>>n>>m;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        scanf("%d",&x[i]);
        if(str=='+'){
            m+=x[i];
        }
        else if(str=='-'){
            if(m-x[i]<0)cnt++;
            else{
                m-=x[i];
            }
        }
    }
    printf("%lld %d\n",m,cnt);
}