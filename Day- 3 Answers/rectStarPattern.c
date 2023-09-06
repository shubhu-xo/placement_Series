#include <stdio.h>
int main() 
{
    int Rows = 4;
    int Stars = 8;
    for (int i = 0; i < Rows; i++) 
    {
        for (int j = 0; j < Stars; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
