#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,ans;
    cin>>n;
    char str1[100000],str2[100000];
    cin>>str1;
    cin>>str2;
    int cnt=0;
    int len=strlen(str1);
    for(int i=0;i<len;i++)
    {
        if(str1[i]-str2[i]<=5 && str1[i]-str2[i]>=0)cnt+=str1[i]-str2[i];
        else if(str2[i]-str1[i]<=5 && str2[i]-str1[i] >=0)cnt+=str2[i]-str1[i];
        else if(str1[i]-str2[i]>5)cnt+=10-(str1[i]-str2[i]);
        else if(str2[i]-str1[i]>5)cnt+=10-(str2[i]-str1[i]);
    }
    printf("%d\n",cnt);
}