#include <stdio.h>
#include <math.h>

void solve_linear_equation(float a, float b, float c) {
    if (a == 0) {
        if (b == 0) {
            printf("Infinite solutions\n\n");
            
        } else {
            printf("No solution\n\n");
        }
    } else {
        printf("The solution is: %f\n", (c-b)/a);
    }
}
void solve_quadratic_equation(float a, float b, float c) {
    float det = b * b - 4 * a * c;

    if (det > 0) {
        float x1 = (-b + sqrt(det)) / (2 * a);
        float x2 = (-b - sqrt(det)) / (2 * a);
        printf("The solutions are: %f and %f\n\n", x1, x2);
    } else if (det == 0) {
        float x = -b / (2 * a);
        printf("The solution is: %f\n", x);
    } else {
        printf("No real solutions\n");
    }
}

void solve_system_of_linear_equations(float a, float b, float c, float d, float e, float f) {
    float det = a * e - b * d;
    if (det != 0) {
        float x = (e * c - b * f) / det;
        float y = (a * f - c * d) / det;
        printf("The solutions are: x = %f, y = %f\n", x, y);
    } else {
        printf("No unique solution exists\n");
    }
}

int main() {

    
 printf("---------------------------------------------------------------------------------------------------------------------------------------------------\n");
 

    float a,b,c,d,e,f;
    int Type;
    printf("Enter 1 if the given equation is linear\n Enter 2 if the given equation is quadratic\n enter 3 if the given equations are system of linear equations\n :");
    scanf("%d",&Type);
    if(Type==1){
    printf("Enter the values of a & b & c for the LINEAR EQUATION ie. 'aX + b = c':\n");
    scanf("%f %f %f",&a,&b,&c);
     solve_linear_equation(a,b,c);
     
    }
else if(Type==2){
    printf("Enter the values of a,b,c for the QUADRATIC EQUATION ie. 'aX^2 + bX + c = 0':\n");
    scanf("%f %f %f",&a,&b,&c);
    solve_quadratic_equation(a, b, c);
}
 else if(Type==3){
     printf("Enter the values of a,b,c for the 1st Equation in SYSTEM OF LINEAR EQUATIONs ie.'aX + bY = c':\n");
     scanf("%f%f%f",&a,&b,&c);
           printf("Enter the values of d,e,f for the 2nd Equation in SYSTEM OF LINEAR EQUATIONS ie. 'dX + eY = f':\n");
     scanf("%f %f %f",&d,&e,&f);
     solve_system_of_linear_equations(a, b, c, d, e, f);

 }   
 else {
    printf("Invalid Type");

 }
 printf("\n");
 printf("---------------------------------------------------------------------------------------------------------------------------------------------------\n");
    return 0;
}
