#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;;i++)
    {
        n*=3;
        m*=2;
        if(n>m){
            printf("%d\n",i);
            break;
        }
    }
}