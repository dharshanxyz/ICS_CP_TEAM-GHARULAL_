# ICS_PROJECT_EQUATION SOLVER
This C program allows us to solve linear equations, quadratic equations, or systems of linear equations based on their input. Here's a brief explanation of the code:

1. Header Files:
     The program includes standard C libraries, `stdio.h` for input and output functions, and `math.h` for mathematical operations.

2. Function Definitions:
   - solve_linear_equation: Handles solving a linear equation "aX + b = c".
   - solve_quadratic_equation: Solves a quadratic equation "aX^2 + bX + c = 0".
   - solve_system_of_linear_equations: Solves a system of linear equations with two variables "aX + bY = c" and "dX + eY = f"

3. Main Function:
   - Prints a separator line for visual clarity.
   - Declares variables for coefficients (`a`, `b`, `c`, `d`, `e`, `f`) and an integer `Type` to represent the type of equation.
   - Prompts the user to input the type of equation they want to solve (linear, quadratic, or system).
   - Depending on the user's choice, it prompts the user to enter the coefficients of the equation(s).
   - Calls the corresponding solving function based on the user's choice.
   - If the user enters an invalid type, it prints "Invalid Type."
   - Prints another separator line for visual separation.

4. User Interaction:
   - The program guides the user with clear prompts and messages to input coefficients and choose the type of equation.

5. Input Validation:
   - The program checks if the user's input is a valid type (1, 2, or 3) and provides an "Invalid Type" message if not.

6. Separator Line:
   - A separator line is printed for visual distinction between different runs of the program.

7. Return Statement:
   - Returns 0 to indicate successful program execution.
  
8. Conclusion: User can solve the different kinds of equations like linear ,Quadratic and system of linear equations by giving the corresponding coefficients. 
