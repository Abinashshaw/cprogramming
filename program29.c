/*Write a C program to reverse an array by swapping the elements and without using any new array.*/

#include<stdio.h>

void prog29(){
int n,i,j;
printf("Enter the size of the array \n");
scanf("%d",&n);
int arr[n];
printf("\nEnter the array elements \n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("\nEntered array \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
i=0;
j=n-1;
while(i<j){
    arr[i]=arr[i]+arr[j];
    arr[j]=arr[i]-arr[j];
    arr[i]=arr[i]-arr[j];
    i++;
    j--;
}
printf("\nArray after swapping \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
