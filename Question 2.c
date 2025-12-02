// Question -> 2 : Use a switch statement to write a simple calvulator ; read two integers and an operator and print the result :
#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1.Add 2.Subtract 3.Multiply 4.Divide 5.Modulus\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Addition of Given Number Is : %d\n", a + b);
        break;
    case 2:
        printf("Subtraction of Given Number Is : %d\n", a - b);
        break;
    case 3:
        printf("Multiplication of Given Number Is : %d\n", a * b);
        break;
    case 4:
        printf("Division of Given Number Is : %.2f\n", (float)a / b);
        break;
    case 5:
        printf("Modulus of Given Number Is : %d\n", a % b);
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}