
// 1.Type

// #include<stdio.h>
// int main(){
//     int n,first=0,last=1,temp;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("%d\t", first);
//         temp=first;
//         first=last;
//         last=last+temp;
//     }
//     return 0;
// }


//2. Type
#include <stdio.h>
 
void main()
{
    int  fib1 = 0, fib2 = 1, fib3, limit, count = 0;
 
    printf("Enter the Number \n");
    scanf("%d", &limit);
    printf("Fibonacci Series is ...\n");
    printf("%d\t", fib1);
    printf("%d\t", fib2);
    count = 2;
    while (count < limit)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\t", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
}