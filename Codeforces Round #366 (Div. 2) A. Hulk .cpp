#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[]="I hate ",str2[]="I love ",str3[]="that ",str4[]="it",str[100000];
    int n,i;
    scanf("%d",&n);
    if(n==1)printf("I hate it\n");
    else{
        //strcpy(str,str1);
        for(i=1;i<=n;i++)
        {
            if(i%2!=0){
                strcat(str,str1);
                if(i!=n)strcat(str,str3);
            }
            else if(i%2==0)
            {
                strcat(str,str2);
                if(i!=n)strcat(str,str3);
            }
        }
        printf("%s it\n",str);
    }
}