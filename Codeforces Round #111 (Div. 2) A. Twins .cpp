#include<stdio.h>
int main()
{
    int t=0,a,l=0,i,j,n,temp,sum=0;
    scanf("%d",&n);
    int ara[n],ara2[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){

            if(ara[i]<ara[j]){
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        l++;
        t+=ara[i];
        if(t>(sum/2))break;
    }
    printf("%d\n",l);

}