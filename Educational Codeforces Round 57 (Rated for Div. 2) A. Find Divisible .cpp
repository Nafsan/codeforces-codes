#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l,r;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        if(r>=2*l){
            cout<<l<<" "<<2*l<<endl;
        }

    }
}