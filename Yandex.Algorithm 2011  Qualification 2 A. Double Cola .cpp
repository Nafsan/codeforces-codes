#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>n;
    int r=1;
    while(r*5<n){
        n-=r*5;
        r*=2;
    }
    string str[]={"Sheldon","Leonard", "Penny", "Rajesh", "Howard"};
    cout<<str[(n-1)/r]<<endl;
}