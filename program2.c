//In this program length of three sides are taken as input.
// Write a C program to find whether a triangle can be formed or not.
// If not display “This Triangle is NOT possible.”
// If the triangle can be formed then
//check the triangle formed is equilateral, isosceles, scalene or a right-angled triangle.

#include<stdio.h>

void prog2(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
       if(a==b && b==c)
       printf("This is equilateral Triangle ");
       else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
       printf("This is isosceles Triangle ");
       else if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
       printf("This is a right-angled Triangle ");
       else
       printf("This is a scalene Triangle ");
    }
    else{
        printf("This Triangle is NOT possible ");
    }
}
