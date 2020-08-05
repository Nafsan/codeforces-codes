#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l,r,sum =0;
        cin>>l>>r;
        if(r!=l){
            if(r%2==0 && l%2==0)
            {
                sum+= -1*(r-1)+l+r;
                sum+= ((r-l)/2)-1;
            }
            else if(r%2==0 && l%2!=0)
            {
                sum+= (r-l+1)/2;
            }
            else if(r%2!=0 && l%2==0)
            {
                sum+= -1*((r-l+1)/2);
            }
            else{
                sum+= ((r-l)/2)-r;

            }
            cout<<sum<<endl;
        }
        else{
            if(r%2!=0)cout<<-1*r<<endl;
            else cout<<r<<endl;
        }
    }
}