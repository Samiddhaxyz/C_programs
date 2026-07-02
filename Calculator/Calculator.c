// the following program is a calculator program in c 
#include <stdio.h>
int main()
{ 
    int a,b;
    char operator;
    printf("enter the first number \n");
     scanf("%d", &a);
    printf("enter the second number \n");
     scanf("%d" , &b);
    printf("enter the desired operator \n");
     scanf(" %c", &operator);
    if( operator == '+')
    {
        printf(" the sum of the two numbers is %d + %d = %d \n", a , b, a + b);
    }
    else if( operator == '-')
    {
        printf(" the difference of the two numbers is %d - %d = %d \n", a , b, a - b);
    }
    else if( operator == '*')
    {
        printf(" the product of the two numbers is %d * %d = %d \n", a , b, a * b);
    }
    else if( operator == '/')
{
    if (b != 0) {
        printf("The quotient is %d / %d = %d \n", a, b, a / b);
    } else {
        printf("Error: Cannot divide by zero! \n");
    }
}
    else
    {
        printf("invalid operator \n");
    }
    return 0;
}
