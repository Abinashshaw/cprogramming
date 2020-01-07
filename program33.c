//Write a C program to sort a given 1D array using pointer in ascending order.

#include<stdio.h>

void sort(int *a,int n){
int i,j,flag=0,temp;
for(i=0;i<n-1;i++){
    flag=0;
    for(j=0;j<n-1-i;j++){
        if(*(a+j)>*(a+j+1)){
            temp=*(a+j);
            *(a+j)=*(a+j+1);
            *(a+j+1)=temp;
            //a++;
            flag=1;
        }
    }
    if(flag==0)
        break;
}
}

void prog33(){
int n,i;
printf("Enter the size f the array \n");
scanf("%d",&n);
int arr[n];
printf("\nEnter the array elements \n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("\nEntered Array \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    sort(arr,n);

printf("\nSorted Array \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
