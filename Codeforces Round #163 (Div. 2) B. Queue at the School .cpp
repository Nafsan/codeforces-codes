#include<stdio.h>
int main()
{
    int a,b,c,i,j,k=1,n,m,t;
    char str[10000];
    scanf("%d%d",&n,&t);
    scanf("%s",str);
    while(t--)
    {

        for(j=1;j<n;j++)
        {
            if(str[j-1]=='B'&&str[j]=='G')
            {
                str[j]='B';
                str[j-1]='G';
                ++j;
            }
        }

    }
    printf("%s\n",str);
}