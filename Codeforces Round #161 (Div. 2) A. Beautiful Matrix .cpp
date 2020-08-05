#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ara[6][6];
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ara[i][j]==1)
            {
               k= abs(i-2)+abs(j-2);

            }
        }
    }
    printf("%d\n",k);
}