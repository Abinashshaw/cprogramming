/*Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.
For example 8 can be expressed as 2^3. */
#include<stdio.h>
#include<math.h>
void poweroftwo(int);

void prog8(){
    int n;
    scanf("%d",&n);
    poweroftwo(n);
}
void poweroftwo(int n){
int temp=n,flag=0;

while(temp!=1){
    if(temp%2!=0){
        flag=1;
        break;
    }
    else
        temp/=2;
}
if(flag==0)
    printf("%d is a number that can be expressed by the power of 2",n);
else
    printf("%d cannot be expressed by the power of 2",n);
}
