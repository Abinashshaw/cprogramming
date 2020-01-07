/*Write a C program to check whether the given input number is Prime number or not using recursion. So, the input is an integer and output should print whether the integer is prime or not.
 Note that you have to use recursion.*/

#include<stdio.h>
#include<math.h>
 int checkprime(int a,int b){
 if(b==1)
    return 1;
 else{
    if(a%b==0)
    return 0;
    else
    return checkprime(a,b-1);
 }
 }

void prog36(){
int n;
printf("Enter no. : \n");
scanf("%d",&n);
if(checkprime(n,sqrt(n))==0)
    printf("\n%d is not a prime ",n);
else
    printf("\n%d is a prime no.",n);

}
