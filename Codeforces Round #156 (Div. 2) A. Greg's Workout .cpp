#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ch=0,bi=0,ba=0;
    cin>>n;
    int ara[n+5];
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        if(i%3==1)ch+=ara[i];
        else if(i%3==2)bi+=ara[i];
        else ba+=ara[i];
    }
    int maxx = max(ch,max(ba,bi));
    if(maxx == ch)cout<<"chest"<<endl;
    else if(maxx == bi)cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
}
 