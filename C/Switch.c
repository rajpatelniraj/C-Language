#include<stdio.h>
int main(){
    int choice;
    printf("Enter the value");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            int a,b,c;
            float s,area;
            printf("Sides of triangle\n");
            scanf("%d %d %d ",&a,&b,&c);
            s=(float)(a+b+c)/2;
            area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
            printf("Area of Trinagle with sides %d,%d,%d is %f\n");
            break;
        }
        case 2:
        {
            float side,area;
            printf("Enter sides of Square\n");
            scanf("%f",&side);
            area=(float)side*side;
            printf("Area of Square is %f\n",area);
            break;
        }
        default:
        {
            printf("Invalid Choice");
            break;
        }
    }
    return 0;
}