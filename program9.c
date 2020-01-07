/*Write a C program to find sum of following series where the value of N is taken as input

 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N*/

 void prog9(){
    int n,i;
    float sum = 0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(1.0/i);
    }
    printf("sum of series is : %.2f",sum);
 }
