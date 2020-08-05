#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans,i,j,k,n,m,l,flag;
    scanf("%d%d",&n,&m);
    j=n/2;
    if(n%2==0){
        ans=j;
        if(ans%m!=0){
            while(1){
                ans++;
                if(ans>n){
                    flag=2;
                    break;
                }
                else if(ans%m==0){
                        flag=1;
                        break;
                }

            }
            if(flag==2)printf("-1\n");
            else printf("%d\n",ans);
        }
        else{
            printf("%d\n",ans);
        }
    }
    else if(n%2!=0){
        ans=j+1;
        if(ans>n)printf("-1\n");
        else if(ans%m!=0){
            while(1){
                ans++;
                 if(ans>n){
                    flag=2;
                    break;
                }
                else if(ans%m==0){
                        flag=1;
                        break;
                }

            }
            if(flag==2)printf("-1\n");
            else printf("%d\n",ans);
        }
        else{
            printf("%d\n",ans);
        }
    }
}