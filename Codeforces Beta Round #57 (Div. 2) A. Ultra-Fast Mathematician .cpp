#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     char str[100000],str2[100000],str3;
     int i,j,k,n,m,x;
     scanf("%s%s",str,str2);
     int len=strlen(str);
     int len2=strlen(str2);
     for(i=0;i<len &&i<len2;i++)
     {
         if(str[i]!=str2[i])printf("1");
         else printf("0");
     }
     puts("");

 }