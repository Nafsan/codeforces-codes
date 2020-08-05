#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,maxx=0,flag=0,highest=0;
    cin>>a>>b;
    char str[a+5];
    for(int i=0;i<b;i++){
        cin>>str;
        flag=0;
        for(int j=0;j<a;j++){
            if(str[j]=='1')flag++;
        }
        if(flag!=a)maxx++;
        else maxx=0;
        if(highest<maxx)highest = maxx;
    }
    cout<<highest<<endl;
}