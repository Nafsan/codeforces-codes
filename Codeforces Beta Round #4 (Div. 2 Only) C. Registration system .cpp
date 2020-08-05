#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string ,int >m;
    int n;
    string str;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>str;
        m[str]++;
        if(m[str]==1)printf("OK\n");
        else {
            int d=m[str]-1;
            cout<<str;
            cout<<d <<endl;
        }

    }
}