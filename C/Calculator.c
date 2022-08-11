#include <stdio.h>
int main()
{
    int n1, n2;
    char op;
  
    printf("Enter Two Number ");
    scanf("%d%d", &n1, &n2);
    printf("Enter The Opertor ");
    fflush(stdin);
    scanf("%c", &op);
   

    switch (op)
    {
    case '+':
        printf("%d", n1 + n2);
        break;

    case '-':
        printf("%d", n1 - n2);
        break;

    case '*':
        printf("%d", n1 * n2);
        break;

    case '/':
        printf("%d", n1 / n2);
        break;

    default:

        printf("Perform Another Task");
        break;
    }
    return 0;
}