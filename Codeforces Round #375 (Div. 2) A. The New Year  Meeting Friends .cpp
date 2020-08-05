#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,h,j,k=0,n,m,p,ara[3];
    scanf("%d%d%d",&ara[0],&ara[1],&ara[2]);
    sort(ara,ara+3);
    k+=abs(ara[0]-ara[1]);
    k+=abs(ara[2]-ara[1]);
    printf("%d\n",k);
}