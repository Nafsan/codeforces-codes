#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum;
    cin>>n>>m;
    sum=n;
    for(int i=1;;i++)
    {
        if(sum%10==m||sum%10==0){
            printf("%d\n",i);
            break;
        }
        else sum+=n;
    }
}