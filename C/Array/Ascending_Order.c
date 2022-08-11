#include <stdio.h>
int main()
{
    int i, j, temp;
    int a[10] = {10, 9, 87, 56, 34, 65, 87, 88, 23, 88};
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Printing sorted element list..\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
return 0;
}


