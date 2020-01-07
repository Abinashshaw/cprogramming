/*Write a C Program to find power of a given number using recursion. The number and the power to be calculated is taken from test case
*/

#include<stdio.h>

long power(int a,int b){
if(a==0||a==1||b==1||b==0)
    return a;
else{
    return a*power(a,b-1);
}

}

void prog22(){
int a,b;
printf("Enter base and exponent respectively \n");
scanf("%d%d",&a,&b);
printf("\nThe required number is : %ld",power(a,b));
}
