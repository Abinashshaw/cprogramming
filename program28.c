/*Write a C program to search a given number from a sorted 1D array and display the position at which it is found using binary search algorithm.*/

#include<stdio.h>

int binary_searching(int arr[],int lower,int upper,int search){
int mid=-1;
if(lower<=upper){
    mid=(lower+upper)/2;
    if(arr[mid]==search)
        return mid;
    else if(arr[mid]>search){
        return binary_searching(arr,lower,mid-1,search);
    }
    else
        return binary_searching(arr,mid+1,upper,search);
}
else
    return mid;
}

void prog28(){
int n,i,j,flag=0,pos,search;
printf("Enter the size of the array \n");
scanf("%d",&n);
int arr[n];
printf("\nEnter Elements \n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("\nEntered array : \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
for(i=0;i<n-1;i++){
    flag=0;
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            arr[j]=arr[j]+arr[j+1];
            arr[j+1]=arr[j]-arr[j+1];
            arr[j]=arr[j]-arr[j+1];
            flag=1;
        }
    }
    if(flag==0)
        break;
}
printf("\nSorted array : \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
printf("\nsEnter the element to be searched ");
scanf("%d",&search);
pos=binary_searching(arr,0,n-1,search);
if(pos==-1){
    printf("%d is not present in the array ",search);
}
else
    printf("%d is present at location : %d",search,pos+1);
}
