#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int l1,l2,l3;
    l1 = s1.length();
    l2 = s2.length();
    l3 = s3.length();

    for(int i=0; i<l3; i++)
    {

        if(s3[i]>=65 && s3[i]<=90)
        {
            s3[i]+= 32;
            for(int j=0;j<l1;j++)
            {
                if(s1[j]==s3[i])
                {
                    s3[i] = s2[j]-32;
                    cout<<s3[i];
                }
            }
        }
        else if(s3[i]>=97 && s3[i]<=122)
        {
            for(int j=0;j<l1;j++)
            {
                if(s1[j]==s3[i])cout<<s2[j];
            }
        }
        else cout<<s3[i];
    }
    puts("");
}