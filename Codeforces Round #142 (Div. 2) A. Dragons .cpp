#include<bits/stdc++.h>
using namespace std;
struct dragon{
    int x,y;
};
bool compare(dragon a,dragon b)
{
    return a.x<b.x;
}
int main()
{
    dragon a[100000];
    int i=0,j,l,s,n,x,y,flag;
    scanf("%d%d",&s,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i].x,&a[i].y);
    }
    sort(a,a+n,compare);
    for(i=0;i<n;i++)
    {
        //printf("%d %d\n",a[i].x,a[i].y);
        if(s<=a[i].x){
            flag=0;
            printf("NO\n");
            break;
        }
        else{
            s+=a[i].y;
            flag=1;
        }
    }
    if(flag==1)printf("YES\n");
}