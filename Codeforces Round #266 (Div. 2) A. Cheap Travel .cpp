#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    if(m*a>b)
    {
        int sum;
        int ans= (n%m)*a;
        if(ans>b){
            sum=((n/m)*b)+b;
        }
        else sum = ((n/m)*b)+ans;
        printf("%d\n",sum);
    }
    else{
        printf("%d\n",n*a);
    }
}