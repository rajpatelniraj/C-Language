#include <stdio.h>

int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    
    for (int i = 4; i >= 0; i--) {
        int k = n >> i; // right shift
        if (k & 1) // helps us know the state of first bit
              printf("1");
        else printf("0");
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int x=~n+1;
    decToBinary(x);
}