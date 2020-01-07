/*Write a C program to search a given element from a 1D array and display the position at which it is found by using linear search function.*/

#include<stdio.h>

int linear_search(int array[],int size,int element){
int i,flag=-1;
for(i=0;i<size;i++){
    if(element==array[i]){
        flag=1;
        break;
    }
}
if(flag==1)
return i;
else if(flag==-1)
    return -1;
}

void prog27(){
int i,n,pos,search;
printf("Enter the size of the array \n");
scanf("%d",&n);
int arr[n];
printf("\nEnter the array elements : \n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("\n Your Entered array elements : ");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);

printf("\nEnter the element that you want to serach \n");
scanf("%d",&search);

pos=linear_search(arr,n,search);
if(pos==-1)
printf("\n%d is not present in the array ",search);
else
    printf("\n%d is present at %d location ",search,pos+1);
}
