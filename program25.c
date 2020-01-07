/*Write a C program to print a triangle of prime numbers upto given number of lines of the triangle.
e.g If number of lines is 3 the triangle will be
2
3      5
7      11      13      */

#include<stdio.h>
#include<math.h>

void prog25(){
int lines,n,i,j,val=2,flag;
printf("Enter the no. of lines \n");
scanf("%d",&lines);
n=lines*(lines+1)/2;
int arr[n];
i=0;
while(i<n){
        flag=0;
    for(j=2;j<=sqrt(val);j++){
        if(val%j==0){
            flag=1;break;
        }
    }
    if(flag==0)
            arr[i++]=val;
        val++;
}
n=0;
for(j=0;j<lines;j++){
    for(i=0;i<=j;i++){
        printf("%d ",arr[n++]);
    }
    printf("\n");
}
}
