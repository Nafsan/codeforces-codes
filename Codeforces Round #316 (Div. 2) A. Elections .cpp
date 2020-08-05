#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int ara[100][100];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    int ind[1000];
    for(int i=0;i<m;i++)
    {
        int maxx = -1000,index = 0;
        for(int j=0;j<n;j++)
        {
            if(ara[i][j]>maxx)
            {
                maxx = ara[i][j];
                index = j+1;
            }
        }
        ind[index]++;
    }
    int maxxx=-11,pos=0;
    for(int i=0;i<1000;i++)
    {
        if(ind[i]>maxxx){
            maxxx = ind[i];
            pos = i;
        }
    }
    cout<<pos<<endl;

}