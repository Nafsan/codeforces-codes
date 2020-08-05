#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1005][1005];
    int n,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>str[i];
    for(int i=0;i<n;i++)
    {
        if(str[i][0]=='O'&&str[i][1]=='O'){
            str[i][0]='+',str[i][1]='+';
            flag=1;
            break;
        }
        else if(str[i][3]=='O'&&str[i][4]=='O'){
            str[i][3]='+',str[i][4]='+';
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Yes\n");
        for(int i=0;i<n;i++)printf("%s\n",str[i]);
    }
    else printf("No\n");


}