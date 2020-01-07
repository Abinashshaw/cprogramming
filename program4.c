//Write a Program to find the sum of all even numbers from 1 to N where the value of N is taken as input.

#include<stdio.h>

void prog4(){
int sum=0,i,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i%2==0)
        sum+=i;
}
printf("Sum = %d",sum);
}
