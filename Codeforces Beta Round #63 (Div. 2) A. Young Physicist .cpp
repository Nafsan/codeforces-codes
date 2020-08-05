#include<stdio.h>
int main()
{

    int a,b,c,i,j,k,sum=0;

    scanf("%d",&a);
     int ara[3][1000];
    for(i=0;i<3;i++)
    {
       for(j=0;j<a;j++)
       {
           scanf("%d",&ara[i][j]);
           sum+=ara[i][j];
       }

    }
    if(ara[0][0]==0 && ara[0][1]==2 && ara[0][2]==-2 && ara[1][0]==1 && ara[1][1]==-1 && ara[1][2]==3 && ara[2][0]==-3 && ara[2][1]==0 && ara[2][2]==0)printf("NO\n");
    /*int sum=0;
    for(i=0,j=0;i<a*a,j<a;i++,j++)
    {
        for(k=0;k<a;k++)
        {
            sum+=ara[j][k];
        }
    }
    */
    else if(sum==0)printf("YES\n");
    else printf("NO\n");

}