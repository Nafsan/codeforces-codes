#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,len,temp;
    char s[100],s2[100];
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len-2;i=i+2)
    {
        for(j=i+2;j<len;j=j+2)
        {
            if(s[i]>=s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }

    }
    for(i=1;i<len;i=i+2)
        {
            s[i]='+';
        }
    printf("%s\n",s);
}