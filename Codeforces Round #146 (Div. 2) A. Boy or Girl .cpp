#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,len,temp=0;
    char arr[1000];
    scanf("%s",arr);
    int size=strlen(arr);
    for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < size; k++) {
               arr[k] = arr[k + 1];
            }
            size--;
         } else
            j++;
      }
    }
     int count=strlen(arr);
    if(count%2==0)printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

}