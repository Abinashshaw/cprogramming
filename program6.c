/*Perfect Number - A perfect number is a positive integer number
which is equals to the sum of it's proper positive divisors excluding the number itself.
For example 6 is a perfect number because it’s proper divisors are 1, 2, 3 and it’s sum is equals to 6.
Write a C program to check whether a given number (N) is a perfect number or not?*/


#include<stdio.h>
#include<math.h>

void prog6(){
int i,n,sum=0;
scanf("%d",&n);
for(i=1;i<n;i++){
    if(n%i==0)
        sum+=i;
}
if(sum==n)
    printf("%d is a Perfect number ",n);
else
    printf("%d is not a perfect number ",n);
}
