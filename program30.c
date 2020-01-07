/*Write a C program to merge two given sorted arrays (sorted in ascending order).
The code for input and output is already written. You have to write the merge function so that the merged array is displayed in ascending order.
*/

#include<stdio.h>

void prog30(){
int n,m,i,j,k;
printf("Enter The size of first array \n");
scanf("%d",&n);
int arr[n];
printf("\nEnter the array element \n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("\nEnter The size of second array \n");
scanf("%d",&m);
int arr1[m];
printf("\nEnter the array element \n");
for(i=0;i<m;i++)
    scanf("%d",&arr1[i]);
int arr2[m+n];
printf("\nEntered array1 : \n");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
printf("\nEntered array2 : \n");
for(i=0;i<m;i++)
    printf("%d ",arr1[i]);
i=j=k=0;
while(i<n&&j<m){
    if(arr[i]<arr1[j])
        arr2[k++]=arr[i++];
    else if(arr[i]>arr1[j])
        arr2[k++]=arr1[j++];
    else{
        arr2[k++]=arr[i++];
        arr2[k++]=arr1[j++];
    }
}
while(i<n){
    arr2[k++]=arr[i++];
}
while(j<m){
    arr2[k++]=arr1[j++];
}
printf("\nResultant array after merging \n");
for(i=0;i<m+n;i++)
    printf("%d ",arr2[i]);

}
