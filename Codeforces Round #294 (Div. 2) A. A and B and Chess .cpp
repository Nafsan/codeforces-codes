#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10][10];
    int n,m,cnt1=0,cnt2=0;
    for(int i=0;i<8;i++)cin>>str[i];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(str[i][j]=='Q')cnt1+=9;
            else if(str[i][j]=='R')cnt1+=5;
            else if(str[i][j]=='B')cnt1+=3;
            else if(str[i][j]=='N')cnt1+=3;
            else if(str[i][j]=='P')cnt1+=1;
            else if(str[i][j]=='q')cnt2+=9;
            else if(str[i][j]=='r')cnt2+=5;
            else if(str[i][j]=='b')cnt2+=3;
            else if(str[i][j]=='n')cnt2+=3;
            else if(str[i][j]=='p')cnt2+=1;
        }
    }
    if(cnt1>cnt2)printf("White\n");
    else if(cnt1<cnt2)printf("Black\n");
    else printf("Draw\n");
}