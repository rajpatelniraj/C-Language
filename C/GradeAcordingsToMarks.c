#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);
    if( marks>85 && marks<=100){
        printf("You Scored grade A...");
    }
    else if(marks>60 && marks<=100){
        printf("You Scored grade B...");
    }
    else if(marks>40 && marks<=100){
        printf("You Scored grade C...");
    }
    else if(marks>30 && marks<=100){
        printf("You Scored  grade D...");
    }
    else if (marks<=30){
        printf("You are Fail");
    }
    return 0;
}