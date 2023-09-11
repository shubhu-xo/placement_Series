#include <stdio.h>
int main() 
{
    //This program prints the 1st 12 terms of Fibonacci series 
    int n=12, i, a = 0, b = 1, c;
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) 
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}