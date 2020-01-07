/*Write a C program to read Two One Dimensional Arrays of same data type (integer type) and merge them into another One Dimensional Array of same type.*/

#include<stdio.h>

void prog13(){
int i,j;
int l1,l2;
printf("Enter the size of first array ");
scanf("%d",&l1);
int arr1[l1];
printf("\nEnter %d elements \n",l1);
for(i=0;i<l1;i++)
    scanf("%d",&arr1[i]);
printf("\nArray1 : ");
for(i=0;i<l1;i++)
    printf("%d ",arr1[i]);

printf("\nEnter the size of second array \n");
scanf("%d",&l2);
int arr2[l2];
printf("\nEnter %d elements \n",l2);
for(i=0;i<l2;i++)
    scanf("%d",&arr2[i]);
printf("\nArray2 : ");
for(i=0;i<l2;i++)
    printf("%d ",arr2[i]);

int arr3[l1+l2];j=0;
for(i=0;i<l1+l2;i++){
   if(i<l1)
        arr3[i]=arr1[i];
    else
        arr3[i]=arr2[j++];
}

printf("\nYour Resultant Array3 : ");
for(i=0;i<l1+l2;i++)
    printf("%d ",arr3[i]);

}
