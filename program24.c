/*Write a C Program to reverse a given word using function.
e.g. INDIA should be printed as  AIDNI */

#include<stdio.h>

void wordrev(char *s,char *d){
int i=0,n=0;
while(s[n++]!='\0');
n--;
while(n>0){
    d[i++]=s[--n];
}
d[i]='\0';
}

void prog24(){
char s[50],d[50];
printf("Enter the String : \n");
scanf("%s",s);
printf("\nEntered String : %s",s);
wordrev(s,d);
printf("\nRequired String : %s",d);
}
