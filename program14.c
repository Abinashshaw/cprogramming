//Write a C Program to delete duplicate elements from an array of integers.

#include<stdio.h>

void prog14(){
int n,i,j,k,temp;
printf("Enter how many nos. you want to enter ");
scanf("%d",&n);
int arr[n];
printf("\n Enter %d array elements \n",n);
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("\nYour entered array ");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
for(i=0;i<n-1;i++){
    temp=arr[i];
    for(j=i+1;j<n;){
        if(arr[j]==temp){
            for(k=j;k<n;k++){
                arr[j]=arr[j+1];
            }
            n--;
        }
        else
            j++;
    }
}
printf("\nYour array after deleting duplicates ");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);

}
