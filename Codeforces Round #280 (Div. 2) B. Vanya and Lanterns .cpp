#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,ara[100000],len;
    scanf("%d%d",&n,&len);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    sort(ara,ara+n);
    int maxx=0;
    for(i=0;i<n-1;i++){
        m=ara[i+1]-ara[i];
        if(m>maxx)maxx=m;
    }
    int x,y;
    x=ara[0]-0;
    y=len-ara[n-1];
    double z=max(x,y);
    double p=maxx/2.0;
    if(z>p)printf("%.10lf\n",z);
    else printf("%.10lf\n",p);
}