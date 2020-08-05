#include <stdio.h>
#include <string.h>

int main () {

   int a,b,c,t,m=0,n,i,j;
   scanf("%d",&t);
   for(i=1;i<=t;i++){
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c>=2)m++;
   }
   printf("%d\n",m);
   return 0;
}