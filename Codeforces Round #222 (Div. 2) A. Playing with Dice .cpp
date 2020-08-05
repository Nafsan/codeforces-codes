#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int w=0,l=0,d=0;
    if(abs(a-b)%2==0)d=1;
    if(a<b){
        w+=a;
        if(b-(a+1)>1)w++;
        if(b-(a+2)>2)w++;
        l+=7-b;
        if(b-1-a>1)l++;
        if(b-2-a>2)l++;
    }
    else if(a==b){
        cout<<0<<" "<<6<<" "<<0<<endl;
        return 0;
    }
    else{
        l+=b;
        if(a-(b+1)>1)w++;
        if(a-(b+2)>2)w++;
        w+=7-a;
        if(a-1-b>1)l++;
        if(a-2-b>2)l++;
    }
    cout<<w<<" "<<d<<" "<<l<<endl;
}