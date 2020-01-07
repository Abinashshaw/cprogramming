/* Write a program to print all the locations at which a particular element(taken as input) is found in a list
and also print the total number of times it occurs in the list. The location starts from 1.
For example if there are 4 elements in the array
5
6
5
7
If the element to search is 5 then the output will be
5 is present at location 1
5 is present at location 3
5 is present 2 times in the array.
*/

#include<stdio.h>

void prog26(){
int n,search,times=0,i;
printf("Enter the size of the array \n");
scanf("%d",&n);
int arr[n];
printf("\nEnter array : \n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("\n Entered array : ");
for(i=0;i<n;i++)
    printf("%d ",arr[i]);

printf("\nEnter element that you want to search \n");
scanf("%d",&search);

for(i=0;i<n;i++){
    if(search==arr[i]){
        printf("\n%d is present at %d location ",search,i+1);
        times++;
    }
}
if(times==0)
    printf("\n%d is not present in the array ",search);
else
printf("\n%d is present %d times in the array ",search,times);
}
