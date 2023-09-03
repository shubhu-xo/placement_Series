#include <stdio.h>
int main() 
{
    float pH;
    // Input the pH value
    printf("Enter the pH value: ");
    scanf("%f", &pH);
    // Check if pH is within the valid range
    if (pH >= 0.0 && pH <= 14.0) 
    {
        if (pH < 7.0) 
        {
            printf("Acidic\n");
        }
        else if (pH > 7.0) 
        {
            printf("Alkaline\n");
        } 
        else 
        {
            printf("Neutral\n");
        }
    } 
    else 
    {
        printf("Invalid pH value. Please enter a value between 0 and 14.\n");
    }

    return 0;
}
