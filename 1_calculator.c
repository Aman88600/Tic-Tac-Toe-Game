#include <stdio.h>
#include <stdlib.h>
// here we declare the prototypes
void sum();
void sub();
void mul();
void division();
void rem();
int main(void)
{
    // here we declare variables
    char opeartor;
    // Here we take inputs
    printf("Enter the operation : ");
    scanf("%c", &opeartor);
    switch (opeartor)
    {
    case '+':
        sum();
        break;
    case '-':
        sub();
        break;
    case '*':
        mul();
        break;
    case '/':
        division();
        break;
    case '%':
        rem();
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}

// This is the sum function it performs the sum operation
void sum()
{
    float number1, number2, sum;
    int success = 0;
    // Here we prompt the user to enter number 1 until the user enters a float
    while (!success)
    {
        printf("Enter number 1: ");
        if (scanf("%f", &number1) == 1)
        {
            success = 1;
        }
        else
        {
            printf("Invalid input. Please enter a valid floating-point number.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    success = 0;
    // Here we prompt the user to enter number 2 until the user enters a float
    while (!success)
    {
        printf("Enter number 2: ");
        if (scanf("%f", &number2) == 1)
        {
            success = 1;
        }
        else
        {
            printf("Invalid input. Please enter a valid floating-point number.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    // Here we add the numbers and store them in a 3rd variable
    sum = number1 + number2;
    printf("sum = %.2f", sum);
}

// This function subtract the numbers
void sub()
{
    float number1, number2, sub;
    int success = 0;
    // Here we prompt the user to enter number 1 until the user enters a float
    while (!success)
    {
        printf("Enter number 1: ");
        if (scanf("%f", &number1) == 1)
        {
            success = 1;
        }
        else
        {
            printf("Invalid input. Please enter a valid floating-point number.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    success = 0;
    // Here we prompt the user to enter number 2 until the user enters a float
    while (!success)
    {
        printf("Enter number 2: ");
        if (scanf("%f", &number2) == 1)
        {
            success = 1;
        }
        else
        {
            printf("Invalid input. Please enter a valid floating-point number.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    // Here we subtract number2 from number 1 and store the result in sub
    sub = number1 - number2;
    printf("sub = %.2f", sub);
}

// Here we multiply the 2 numbers
void mul()
{
    float a, b, mul;
    int success = 0;
    // Here we prompt the user to enter number 1 until the user enters a float
    while (!success)
    {
        printf("Enter number 1: ");
        if (scanf("%f", &a) == 1)
        {
            success = 1;
        }
        else
        {
            printf("Invalid input. Please enter a valid floating-point number.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    success = 0;
    // Here we prompt the user to enter number 2 until the user enters a float
    while (!success)
    {
        printf("Enter number 2:");
        if (scanf("%f", &b) == 1)
        {
            success = 1;
        }
        else
        {
            // Here we clean the input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    // Here we multiply the numbers and store the result in a 3rd variable mul
    mul = a * b;
    printf("multiplication = %.2f", mul);
}

// This function divides the numbers
void division()
{
    float a, b, div;
    int success = 0;
    // Here we prompt the user to enter number 1 until the user enters a float
    while (!success)
    {
        printf("Enter number 1:");
        if (scanf("%f", &a) == 1)
        {
            success = 1;
        }
        else
        {
            // Clear input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    success = 0;
    // Here we prompt the user to enter number 1 until the user enters a float
    while (!success)
    {
        printf("Enter 2nd number :");
        if (scanf("%f", &b) == 1)
        {
            success = 1;
        }
        else
        {
            // Clear input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    if (b != 0)
    {
        // Here we add the numbers and store them in a 3rd variable
        div = a / b;
        printf("division = %.2f", div);
    }
    else
    {
        printf("Zero Division Not Possible");
    }
}

// This function gives the reaminder
void rem()
{
    int a, b, rem;
    int success = 0;
    char input[100];

    while (!success)
    {
        printf("Enter an integer: ");
        if (scanf("%d", &a) == 1)
        {
            success = 1;
        }
        else
        {
            while (getchar() != '\n')
                ;
            printf("Invalid input. Please enter a valid integer.\n");
            system("cls");
        }
    }
    success = 0;
    while (!success)
    {
        printf("Enetr 2nd number(int):");
        if (scanf("%i", &b) == 1)
        {
            success = 1;
        }
        else
        {
            // Clear input buffer
            while (getchar() != '\n')
                ;
            system("cls");
        }
    }
    // Here we calculate the remainder
    rem = a % b;
    printf("remainder = %i", rem);
}