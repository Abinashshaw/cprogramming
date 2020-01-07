/*Write a C program to print the following Pyramid pattern upto Nth row. Where N (number of rows to be printed) is taken as input.
*****
****
***
**
*
*/

#include<stdio.h>

void prog10(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }

}
