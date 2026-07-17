#include <stdio.h>
#include <math.h>

int direct_hanoi(int user_input)
{
    double result = pow(2, (user_input)) - 1;
    return (int)result;
}

// through recursive approach
int recursive_hanoi(int user_input)
{
    if (user_input == 0)
    {
        return 0;
    }
    else
    {
        int total = recursive_hanoi(user_input - 1);
        return total + total + 1;
    }
}
// through iterative approach
int iterative_hanoi(int user_input)
{
    int result = 0;
    int i = 1;
    while (i <= user_input)
    {
        result = result + result + 1;
        i++;
    }
    return result;
}
int main()
{
    // direct formula approach for the tower of hanoi problem
    int user_input;
    printf("Enter a number of your choice:\n ");
    scanf("%d", &user_input);
    int options;
    printf("Type the desired operator of your choice,    (1)  ' 1 ' for direct approach,    ( 2) ' 2 ' for recursive approach,     (3) ' 3 ' for iterative aproach : \n");
    scanf("%d", &options);
    if (options == 1)
    {
        printf("the value of  the tower of hanoi through direct formula is %d: \n", direct_hanoi(user_input));
    }
    else if (options == 2)
    {
        printf("the result of the tower of hanoi through recursive appraoch is %d\n", recursive_hanoi(user_input));
    }
    else if (options == 3)
    {
        printf("the result of the tower of hanoi through iterative appraoch is %d\n", iterative_hanoi(user_input));
    }
    else
    {
        printf("invalid operator please try again");
    }
    return 0;
}
