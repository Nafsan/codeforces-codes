#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,len,i,j,n;
    char str[1000000],str1[1000000];
    scanf("%s",&str);
    len=strlen(str);
    for(i=0; i<len;)
    {
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
        {
            if(str[i-1]>='A'&&str[i-1]<='Z'&&((str[i-1]=='B'&&str[i-2]!='U'&&str[i-3]!='W')||(str[i-1]=='B'&&str[i-2]=='U'&&str[i-3]!='W')||(str[i-1]!='B')))printf(" ");
            i+=3;
            continue;
        }

        printf("%c",str[i]);
        i++;

    }
    puts("");
}