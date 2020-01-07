/*Write a program in C to find the factorial of a given number using pointers.*/

#include<stdio.h>

long long fact(int *f){
int temp;
if(*f==1||*f==0)
    return 1;
else{
    temp=*f;
    *f=*f-1;
    return temp*fact(f);
}

}

void prog41(){
int n;
printf("Enter the value : ");
scanf("%d",&n);
printf("Required Factorial : %lld",fact(&n));

}
