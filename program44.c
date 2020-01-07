/*Write a C program to add two distance given as input in feet and inches. */

#include<stdio.h>

struct{
int feet;
int inches;
}d1,d2,sum;

void prog44(){
printf("Enter first distance \n");
scanf("%d%d",&d1.feet,&d1.inches);
printf("Enter second distance \n");
scanf("%d%d",&d2.feet,&d2.inches);
sum.feet=d1.feet+d2.feet;
sum.inches=d1.inches+d2.inches;

sum.feet+=sum.inches/12;
sum.inches=sum.inches%12;

printf("\nRequired sum : \n");
printf("Feet : %d\tinches : %d",sum.feet,sum.inches);
}
