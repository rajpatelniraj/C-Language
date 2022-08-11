#include<stdio.h>
int main()
{
    int rows,columns,k=1;;
    printf("Enter the no of Rows :");
    scanf("%d",&rows);
    printf("Enter the no of Columns :");
    scanf("%d",&columns);
    int a[rows][columns];
    int i=1;
    while (i<=rows){
        int j=1;
        while(j<=columns){
            printf("%d\t",k);
            k++;
            j++;
        }
        i++;
        printf("\n");
    }
return 0;
}