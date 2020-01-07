/*Write a C program to find the sum of two 1D integer arrays ‘A’  and ‘B’ of same size and store the result in another array ‘C’,
 where the size of the array and the elements of the array are taken as input.*/

 #include<stdio.h>

 void prog45(){
 int i,n,*A,*B,*C;
 printf("Enter how many nos. you want to enter\n");
 scanf("%d",&n);
 printf("Enter first array \n");
 A=(int*)calloc(n,sizeof(int));
 B=(int*)calloc(n,sizeof(int));
 for(i=0;i<n;i++){
    scanf("%d",&A[i]);
 }
 printf("\nEnter second array \n");
 for(i=0;i<n;i++){
    scanf("%d",&B[i]);
 }
 for(i=0;i<n;i++)
    C[i]=A[i]+B[i];
 printf("\nRequired resultant array \n");
 for(i=0;i<n;i++)
    printf("%d\n",C[i]);
 }
