#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+4],b[n+4],c[n+4];
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>b[i];
        s2+=b[i];
    }
    for(int i=0;i<n-2;i++){
        cin>>c[i];
        s3+=c[i];
    }
    int ans1,ans2;
    ans1=s1-s2;
    ans2=s2-s3;
    printf("%d\n%d\n",ans1,ans2);
}