/*Write a C Program to print Binary Equivalent of an Integer using Recursion */

#include<stdio.h>

long binary_conversion(int num){
if(num==0)
return 0;
else{
    return (num%2+10*binary_conversion(num/2));
}
}

void prog23(){
int num;
printf("Enter the number : \n");
scanf("%d",&num);
printf("Binary equivalent of %d is %ld",num,binary_conversion(num));
}
