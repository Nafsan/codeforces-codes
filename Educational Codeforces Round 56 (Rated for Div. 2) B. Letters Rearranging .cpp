#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string str;
        cin>>str;
        int len = str.length();
        int flag=0;
        for(int i=0;i<len/2;i++)
        {
            if(str[i]==str[len-1-i])flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        int index=0;
        if(flag==1)cout<<str<<endl;
        else{
            for(int i=0;i<len-1;i++)
            {
                if(str[i]!=str[i+1]){
                    index=1;
                    swap(str[i],str[i+1]);
                    break;
                }
                else index=0;
            }
            if(index==1)cout<<str<<endl;
            else cout<<-1<<endl;
        }
    }
}