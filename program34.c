//Write a C program to sort a 1D array using pointer by applying Bubble sort technique.

#include<stdio.h>

void bubble_sort(int *a,int size){
int i,j,temp,flag=0;

for(i=0;i<size-1;i++){
    flag=0;
    for(j=0;j<size-1-i;j++){
        if(*(a+j)>*(a+j+1)){
            temp=*(a+j);
            *(a+j)=*(a+j+1);
            *(a+j+1)=temp;
            flag=1;
        }
    }
    if(flag==0)
        break;
}
}

void prog34(){
int n,i;
printf("Enter the size of the array \n");
scanf("%d",&n);
int arr[n];
printf("\nEnter the elements in the array \n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("\nEntered array : \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);

bubble_sort(arr,n);

printf("\nSorted array : \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);

}
