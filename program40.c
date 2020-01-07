/*Write a C program to reverse a word using Recursion. Input to the program is a string that is to be taken from the user
 and output is reverse of the input word. Note that you have to use recursion.*/
#include<stdio.h>

char* strreverse(char *s){
static char str[100];
static int n;
char x;
if((x=*s++)=='\0')
    return;
else{
    strreverse(s);
    str[n++]=x;
    return str;
}
}

void prog40(){
char s[20],*st;
printf("Enter a string : \n");
scanf("%s",s);
printf("\nEntered string : %s\n",s);
st=strreverse(s);
printf("Required string : %s\n",st);
}
