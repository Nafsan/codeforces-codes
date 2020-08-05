#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[10];
    int n,m=0;
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        m+=n;
    }
    if(m==0|| m%5!=0)printf("-1\n");
    else printf("%d\n",m/5);
}