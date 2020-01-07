//Write a program to find whether a given character is a Vowel or consonant. A character is taken as input.

#include<stdio.h>

void prog5(){
char c;
scanf("%c",&c);
switch(c){
    case 67:
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':printf("%c is Vowel",c); break;
default :printf("%c is Consonant",c);
}
}
