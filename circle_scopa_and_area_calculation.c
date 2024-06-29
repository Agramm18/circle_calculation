#include <stdio.h>

int main() {
    //calculations are in cm
    const float pi = 3.14159; //PI
    float radius = printf("Please type in the radius from your circle: ", radius); //Asks the user for the circle radius
    scanf("%f", &radius);
    printf("The radius from your circle is: %.2f", radius); //Circle Radius output
    printf("\n");
    float area_calculation = pi * (radius * radius); //Area calculation
    float scope_calculation = pi * (radius * 2); //Scope calculation

    printf("Your circle area is: %.2f\n", area_calculation); //Area output
    printf("Your circle scope is: %.2f\n", scope_calculation); //Scope output

    return 0;
}