#include<stdio.h>
int main(){
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if(age>=18){
        printf("You are Eligible for Voting");
    } else{
        printf("You are not Eligible for Voting");
    }
}