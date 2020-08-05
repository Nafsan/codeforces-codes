#include<stdio.h>
int main()
{
    int n,m,a=0,b,i=0,j;
    scanf("%d%d",&n,&m);
    if(m>n)printf("%d\n",n);
    else
    {
        while(n!=0)
        {
            n--;
            i++;
            a++;
            if(i==m)
            {
                n+=1;
                i=0;
            }
        }
        printf("%d\n",a);
    }
}