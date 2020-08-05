#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    cin>>str;
    int len = strlen(str);
    int flag = 0;
    for(int i=0; i<len; i++)
    {

        if(str[i]=='1'|| str[i]=='4')
        {
            if(str[i]=='1')
                flag = 1;
            else if(str[i] == '4')
            {
                if(i==0)
                {
                    //cout<<"1st index 4 tai error"<<endl;
                    flag = 0;
                    break;
                }
                if(str[i-1]=='1')
                    flag = 1;
                else if(str[i-1]=='4')
                {
                    if(i-2<0)
                    {
                       // cout<<"i-2<0"<<endl;
                        flag = 0;
                        break;
                    }
                    if(str[i-2]=='1')
                        flag = 1;
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        else {
            flag=0;
            break;
        }
    }
    if(flag == 0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}