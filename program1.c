//Write a C Program to Find the Smallest Number  among Three Numbers (integer values) using Nested IF-Else statement.
#include<stdio.h>

void prog1(){
  int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
   if(a<b){
    if(a<c){
        printf("%d is smallest ",a);
    }
    else{
        printf("%d is smallest ",b);
    }
   }
   else{
    if(b<c){
        printf("%d is smallest ",b);
    }
    else{
        printf("%d is smallest ",c);
    }
   }
}
