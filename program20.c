/*Write a C program to print Largest and Smallest Word from a given sentence. If there are two or more words of same length then the first one is considered. */

#include<stdio.h>
#include<string.h>

void prog20(){
int i,j,k,len,a,min=0,max=0,minIndex=0,maxIndex=0;
char str[100],str1[20][20];
printf("Enter a String : \n");
scanf("%[^\n]%*c",str);
printf("\nString entered is : \n");
puts(str);
i=0,k=0;
while(str[k]!='\0'){
    j=0;
    while(str[k]!=' ' && str[k]!='\0'){
        str1[i][j++]=str[k++];
    }

    str1[i++][j]='\0';

    if(str[k]!='\0'){
        k++;
    }
}
str1[i-1][j-1]='\0';
len=i;

min=strlen(str1[minIndex]);
for(i=1;i<len;i++){
    a=strlen(str1[i]);
    if(min>a){
        min=a;
        minIndex=i;
    }
}
max=strlen(str1[maxIndex]);
for(i=1;i<len;i++){
    a=strlen(str1[i]);
    if(max<a){
        max=a;
        maxIndex=i;
    }
}

printf("\nLargest word is : %s",str1[maxIndex]);
printf("\nSmallest word is : %s",str1[minIndex]);

}
