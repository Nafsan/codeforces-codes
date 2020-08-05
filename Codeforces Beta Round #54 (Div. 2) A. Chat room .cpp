#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,len1,len2,temp=0,count=0;
    char str1[]="hello",str2[1000],str3[1000];
    //scanf("%s",str1);
    len1=strlen(str1);
    scanf("%s",str2);
    len2=strlen(str2);
    for(i=0;i<len1;i++)
    {
        for(j=temp;j<len2;j++)
        {
            if(str1[i]==str2[j]){
                    temp=j+1;
                    count+=1;
                    str1[i]=0;
            }
        }
    }
    if(count==len1)printf("YES\n");
    else printf("NO\n");
}