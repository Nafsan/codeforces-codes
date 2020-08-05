#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,sum=0;
    scanf("%d",&n);
    for(int i=1;; i++)
    {
        int x=sum;
        if(n==1)
        {
            printf("1\n");
            break;
        }
        else if(sum==n)
        {
            printf("%d\n",i-1);
            break;
        }
        else if(sum>n)
        {
            printf("%d\n",i-2);
            break;
        }
        m+=i;
        sum+=m;
    }
}