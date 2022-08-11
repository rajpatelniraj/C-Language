#include<stdio.h>
int main()
{
    int i,a;
    printf("enter a");
    scanf("%d",&a);
    for(i=a,i<=a*10,i=+i+a)
    {
        printf("%d \n",i);
    }
    return 0;

}