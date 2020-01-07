/*Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. The string may be a word or a sentence. */

#include<stdio.h>
#include<string.h>
void prog16(){
int uCount=0,lCount=0,i,n;
char str[100];

printf("Enter a line or a word ");
scanf("%[^\n]%*c",str);
printf("String : %s",str);
for(i=0;i<strlen(str);i++){
    if(str[i]>64&&str[i]<91)
        uCount++;
    else if(str[i]>96&&str[i]<123)
        lCount++;
}
printf("\nTotal UpperCase Letters : %d\nTotal LowerCase Letters : %d",uCount,lCount);

}
