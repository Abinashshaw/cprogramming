/* Write a C program to find the sum of all elements of each row of a matrix.
   Example: For a matrix  4 5 6
                          6 7 3
                          1 2 3
  The output will be
  15
  16
   6*/


#include<stdio.h>

void prog17(){
int m,n,i,j;
printf("Enter the no. of rows and columns respectively \n");
scanf("%d%d",&m,&n);
int arr1[m][n],ar[m];
printf("Enter the array elements in  row measure order \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        scanf("%d",&arr1[i][j]);
}
for(i=0;i<m;i++)
    ar[i]=0;
printf("\nEntered array : \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d ",arr1[i][j]);
        ar[i]=ar[i]+arr1[i][j];
    }
    printf("\n");
}
printf("\nRequired sum of each row \n");
for(i=0;i<m;i++)
    printf("%d \n",ar[i]);
}
