//Write a program to find the factorial of a given number using while loop.

#include<stdio.h>

void prog3(){
    int n,f=1;
    scanf("%d",&n);
    printf("The Factorial of %d is : ",n);
    while(n>0){
        f*=n--;
    }
    printf("%d\n",f);
}
