/*Write a C program to print lower triangle of a square matrix.
For example the output of a given matrix
2 3 4     will be  	  2 0 0
5 6 7                 5 6 0
4 5 6                 4 5 6 */

#include<stdio.h>

void prog19(){
int i,j,n,m;
printf("Enter order of square matrix\n");
scanf("%d",&n);
m=n;
int matrix[n][n],matrix1[n][n];
printf("\nEnter elements in square matrix \n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        scanf("%d",&matrix[i][j]);
}
printf("\nMatrix : \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        printf("%d ",matrix[i][j]);
    printf("\n");
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(j<=i)
            matrix1[i][j]=matrix[i][j];
        else
            matrix1[i][j]=0;
    }
}
printf("\nResultant Matrix :\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        printf("%d ",matrix1[i][j]);
    printf("\n");
}

}
