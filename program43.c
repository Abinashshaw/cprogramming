/*Write a C program to store n elements using Dynamic Memory Allocation - calloc() and find the Largest element*/

#include<stdio.h>

void prog43(){
int n,i;
float *element,max;
printf("Enter how many elements you want to add \n");
scanf("%d",&n);
element=(float*)calloc(n,sizeof(int));
printf("\nEnter %d elements \n",n);
for(i=0;i<n;i++){
    scanf("%f",&element[i]);
}
max=element[0];
for(i=1;i<n;i++){
    if(max<element[i])
        max=element[i];
}
printf("\n%f is largest element ",max);
}
