#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,prev;
    cin>>a>>b;
    for(int i=1;;i++)
    {
        //cout<<sum<<endl;
        if(b>sum)
        {
            prev = sum;
            if(i%a!=0)sum+= i%a;
            else sum+=a;
        }
        else if(b==sum){
            cout<<'0'<<endl;
            break;
        }
        else{
            cout<< b-prev<<endl;
            break;
        }
    }
}