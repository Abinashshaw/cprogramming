//Write a C code to check if a 3 x 3 matrix is invertible. A matrix is not invertible if its determinant is 0.

#include<stdio.h>

int determinant(int arr[][3],int row,int column){
if(row<=3&&column<=3){
    int ar[2][2];
    int i,j,m=0,n=0,r;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i!=row&&j!=column){
              ar[m][n++]=arr[i][j];
            }
            if(n==2){
                m=1;
                n=0;
            }
        }
    }

    r= ar[0][0]*ar[1][1] - ar[1][0]*ar[0][1];
    return r;
}
else
    return -1;

}

void prog35(){
int i,j,matrix[3][3],result=0,temp;

printf("Following is program to check whether a matrix is invertible or not for 3*3 matrix \n");
printf("Enter the matrix element \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
        scanf("%d",&matrix[i][j]);
}

printf("\nEntered matrix : \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
        printf("%d ",matrix[i][j]);
    printf("\n");
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(!(i==1&&j==1)&&(i==1||j==1)){
             temp=(-1)*determinant(matrix,i,j);
            result+=temp;
        }
        else{
            temp=determinant(matrix,i,j);
            result+=temp;
        }
        printf("%d ",temp);
    }
}
printf("\n%d",result);
}
