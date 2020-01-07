/*Write a C program to print the Record of the Student Merit wise
Here a structure variable is defined which contains student rollno, name and score*/

#include<stdio.h>

struct Student{
int rollno;
char name[20];
int score;
};

void prog42(){
int i,n,j,flag=0;
printf("Enter how many records you want to enter \n");
scanf("%d",&n);
struct Student st[n],stud;
printf("\nEnter %d records \n",n);
for(i=0;i<n;i++){
    printf("\nEnter details of student %d \n",i+1);
    printf("\nEnter rollno : ");
    scanf("%d",&st[i].rollno);
    printf("\nEnter name : ");
    scanf("%s",st[i].name);
    printf("\nEnter score : ");
    scanf("%d",&st[i].score);
    printf("\n===================================\n");
}
for(i=0;i<n-1;i++){
        flag=0;
    for(j=0;j<n-i-1;j++){
        if(st[j].score<st[j+1].score){
            stud=st[j];
            st[j]=st[j+1];
            st[j+1]=stud;
            flag=1;
        }
    }
    if(flag==0)
        break;
}

printf("\nRequired Merit List Of %d Students \n");
for(i=0;i<n;i++){
    printf("rollno : %d\tname : %s\tmarks : %d\n",st[i].rollno,st[i].name,st[i].score);
}

}
