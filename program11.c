/*Write a C Program to find Largest Element of an Integer Array.
Here the number of elements in the array  (n) and the elements of the array is read from the test data.
Use the printf statement given below to print the largest element.
printf("Largest element = %d", largest);*/
#include<stdio.h>

void prog11(){
int n,i,largest=-32767;
printf("Enter how many no you want to enter : ");
scanf("%d",&n);
int arr[n];
printf("\nEnter %d elements ",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(largest<arr[i])
        largest=arr[i];
}
printf("Largest element = %d", largest);
}
