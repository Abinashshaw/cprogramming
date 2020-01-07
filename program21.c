/*Write a C Program to find GCD of 4 given numbers using recursive function*/

#include<stdio.h>

int GCD(int a,int b){
if(a>0&&b>0){
    if(a==1||a==b)
        return a;
    else{
        if(a>b)
            return GCD(a-b,a);
        else
            return GCD(a,b-a);
    }
}
}

void prog21(){
int a,b,c,d;
printf("Enter four nos. \n");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("\nEntered four nos. are %d,%d,%d,%d",a,b,c,d);
printf("\nGCD of four nos. %d",GCD(GCD(a,b),GCD(c,d)));

}
