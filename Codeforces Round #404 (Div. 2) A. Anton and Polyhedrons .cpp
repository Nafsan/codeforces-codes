#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(str=="Tetrahedron")sum+=4;
        else if(str=="Cube")sum+=6;
        else if(str=="Octahedron")sum+=8;
        else if(str=="Dodecahedron")sum+=12;
        else if(str=="Icosahedron")sum+=20;
    }
    printf("%d\n",sum);
}