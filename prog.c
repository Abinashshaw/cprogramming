#include<stdio.h>
#include<string.h>

enum character{a=0,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z}ch;
void pr(){
    int i,n;
    int arr[26];
    for(i=0;i<26;i++)
        arr[i]=0;
    char str[20];
    printf("Enter String :\n");
    scanf("%s",str);
    //n=strlen(str);
    for(n=0;n<strlen(str);n++)
        {
        i=str[n];
        arr[i]++;
    }
    for(n=0;n<26;n++){
        if(arr[n]>0)
            printf("%c",n+'a');
    }
}
