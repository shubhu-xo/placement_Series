#include <stdio.h>
#include <math.h>
int main() 
{
    float h, r, volume;
    // Input height and radius from the user
    printf("Enter the height of the cone: ");
    scanf("%f", &h);
    printf("Enter the radius of the base of the cone: ");
    scanf("%f", &r);
    // Check if the height and radius are non-negative
    if (h < 0 || r < 0) 
    {
        printf("Height and radius must be non-negative.\n");
    } 
    else 
    {
        //volume of the cone formula: V = (1/3) * π * r^2 * h
        volume = (1.0/3.0)*3.14*pow(r, 2) * h;
        printf("The volume of the cone is: %.2f cubic units\n", volume);
    }
    return 0;
}
