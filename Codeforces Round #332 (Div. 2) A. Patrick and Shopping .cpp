#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k;
    cin>>n>>m>>k;
    int a=min(n,m);
    int b=max(n,m);
    int d1,d2,d3;
    d1=k+b;
    d2=a+2*b;
    d3=a+2*k;
    int s,t;
    s=min(d1,d2);
    t=min(s,d3);
    int cnt=a+t;
    printf("%d\n",cnt);
	
}