/*Write a C program to find subtraction of two matrices i.e. matrix_A - matrix_B=matrix_C.
 If the given martix are
 2 3 5     and  1 5 2    Then the output will be  1 -2 3
 4 5 6          2 3 4                             2 2 2
 6 5 7          3 3 4                             3 2 3
 The elements of the output matrix are separated by one blank space */

 #include<stdio.h>

 void prog18(){
 int m,n,i,j;
 printf("Enter the row and column no. of each matrix respectively \n");
 scanf("%d%d",&m,&n);
 int matrix1[m][n],matrix2[m][n],matrix3[m][n];
 printf("\nEnter the elements of first matrix \n");
 for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        scanf("%d",&matrix1[i][j]);
 }
 printf("\nEnter the elements of Second matrix \n");
 for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        scanf("%d",&matrix2[i][j]);
 }
 printf("\n Matrix1 : \n");
 for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        printf("%d ",matrix1[i][j]);
    printf("\n");
 }
 printf("\n Matrix2 : \n");
 for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        printf("%d ",matrix2[i][j]);
    printf("\n");
 }
 for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        matrix3[i][j]=matrix1[i][j]-matrix2[i][j];
 }
  printf("\nRequired resultant Matrix : \n");
 for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        printf("%d ",matrix3[i][j]);
    printf("\n");
 }

 }
