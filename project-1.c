#include <stdio.h>

int main()
{
    // number guessing game
    int number = 7;
    int guess;
    printf("welcome to the number guessing game\n");
    printf("Please enter only numeric values to get the desired output\n"); 
    int j = 0;
    while (j < 10)
    {
        printf("take your turn in guessing the number\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("higher number please\n");
        }
        else if (guess > number)
        {
            printf("lower number please\n");
        }
        else if (guess == number)
        {
            printf("you have guessed the number correctly\n");
            printf("you have taken %d turns to guess the number\n", j+1);
            return 0;
            
        }
        else
        {
            printf("sorry an error occured ! PLease try again later\n");
        }
        j++;
    }
    printf("the correct number is %d\n", number);
    return 0;
}