//C Program to delete an element from a specified location of an Array starting from array[0] as the 1st position, array[1] as second position and so on.

#include<stdio.h>

void prog15(){
int n,i,temp;
printf("Enter no of elements of array ");
scanf("%d",&n);
int arr[n];
printf("\nEnter array elements : ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("\nYour entered array : ");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
printf("\nEnter the position which element you want to delete ");
scanf("%d",&temp);

for(i=temp-1;i<n;i++){
    arr[i]=arr[i+1];
}
n--;
printf("\nRequired array : ");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
