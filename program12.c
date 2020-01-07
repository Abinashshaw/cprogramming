/*Write a C Program to print the array elements in reverse order (Not reverse sorted order. Just the last element will become first element, second last element will become second element and so on)
Here the size of the array (n) and the array elements is accepted from the test case data. The last part i.e. printing the array is also written.
You have to complete the program so that it prints in the reverse order. */

#include<stdio.h>

void prog12(){
int i,j,n;
printf("Enter the no of elements inside the array \n");
scanf("%d",&n);
int arr[n];
printf("Enter Array elements : ");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

printf("Your entered array is : ");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}

j=n-1;
i=0;
while(i<j){
    arr[i]=arr[i]+arr[j];
    arr[j]=arr[i]-arr[j];
    arr[i]=arr[i]-arr[j];
    i++;j--;
}
printf("\nYour array after reversing its elements : ");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}

}
