// #include<stdio.h>
// int main(){
//     int i=1,j=1;
//     for(i=1;i<=3;i++){
//         for(j=1;j<=3;j++){
//             printf("%d %d\n",&i,&j);
//             if(i==2 && j==2){
//                     break;
//             }
//            }   }
//     return 0;
// }

// Break Statment using Do While loop

#include<stdio.h>  
void main ()  
{  
   int n=2,i,choice;  
   do  
   {  
       i=1;  
       while(i<=10)  
       {  
           printf("%d X %d = %d\n",n,i,n*i);  
           i++;  
       }  
       printf("do you want to continue with the table of %d , enter any non-zero value to continue.",n+1);  
       scanf("%d",&choice);  
    if(choice == 0)  
       {  
           break;  
       }  
       n++;  
   }while(1);  
}  