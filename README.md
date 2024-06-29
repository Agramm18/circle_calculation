Circle Calculations Program

Overview

This program is designed to calculate the area and circumference of a circle based on the radius input provided by the user. It is written in C and uses basic standard input/output functions to interact with the user.

How to Use

1. Compile the Program:
   Use a C compiler like `gcc` to compile the program. Run the following command in your terminal:
   ```sh
   gcc -o circle_calculations circle_calculations.c
   ```

2. Run the Program:
   Execute the compiled program by running:
   ```sh
   ./circle_calculations
   ```

3. Input the Radius:
   When prompted, enter the radius of the circle in centimeters (cm). The program will read the input and proceed to calculate the area and circumference of the circle.

Example Usage

```sh
$ ./circle_calculations
Please type in the radius from your circle: 5
The radius from your circle is: 5.00
Your circle area is: 78.54
Your circle scope is: 31.42
```

Code Explanation

- Constants and Variables:
  - `const float pi = 3.14159;`: Defines the constant value of π (Pi).
  - `float radius;`: Declares a variable to store the radius input by the user.
  - `float area_calculation;`: Declares a variable to store the calculated area of the circle.
  - `float scope_calculation;`: Declares a variable to store the calculated circumference of the circle.

- User Input:
  - `printf("Please type in the radius from your circle: ");`: Prompts the user to enter the radius.
  - `scanf("%f", &radius);`: Reads the user input and stores it in the `radius` variable.

- Calculations:
  - `area_calculation = pi * (radius * radius);`: Calculates the area of the circle using the formula πr².
  - `scope_calculation = pi * (radius * 2);`: Calculates the circumference of the circle using the formula 2πr.

- Output:
  - `printf("The radius from your circle is: %.2f\n", radius);`: Displays the radius entered by the user.
  - `printf("Your circle area is: %.2f\n", area_calculation);`: Displays the calculated area of the circle.
  - `printf("Your circle scope is: %.2f\n", scope_calculation);`: Displays the calculated circumference of the circle.

Notes

- Ensure to enter a valid floating-point number for the radius when prompted.
- The calculations are performed and displayed with a precision of two decimal places for readability.

License

This program is free to use and modify. No specific license is associated with it.

Author

Alex Gramm

Feel free to modify this README and the program code to better suit your needs.# circle_calculation
