#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt =0 ;
    char str[1000];
    cin>>str;
    int len = strlen(str);
    for(int i=0 ;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9'){
            int a = str[i]-'0';
            if(a%2!=0)cnt++;
        }
        else if(str[i]=='a' || str[i]=='e'||str[i]=='i' || str[i]=='o'|| str[i]=='u')cnt++;
    }
    cout<<cnt<<endl;
}