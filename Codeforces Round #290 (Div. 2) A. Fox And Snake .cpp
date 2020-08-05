#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,n,m,i,j,len;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=m;j++)printf("#");
            printf("\n");
        }

         if(i%2==0 && i%4!=0)
        {
            for(j=1;j<m;j++)printf(".");
            printf("#\n");
        }

        else if(i%4==0){
            printf("#");
            for(j=2;j<=m;j++)printf(".");
            printf("\n");
        }
    }
}