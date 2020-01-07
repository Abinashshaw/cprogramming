//Write a C program to count total number of digits of an Integer number (N).

void prog7(){
    int count=0,n;
    scanf("%d",&n);
    printf("The number %d contains",n);
    while(n>0){
        count++;
        n/=10;
    }
        printf(" %d digits",count);
}
