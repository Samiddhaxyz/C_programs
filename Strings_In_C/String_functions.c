#include <stdio.h>

// length function for the string
int My_strlen(char *str)
{
    // calculating length of the string

    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    };
    return (count);
};

// copy function of the string
char *My_strcopy(char *p, char *d)
{
    char *start = d;
    while (*p != '\0')
    {
        *d = *p;
        d++;
        p++;
    }
    *d = '\0';
    return start;
};

// compare function of the string
int My_strcmp(char *point1, char *point2)
{
    while (*point1 && *point2 != '\0')
    {
        if (*point1 == *point2)
        {

            point1++;
            point2++;
        }
        else
        {
            return *point1 - *point2;
        }
    }

    return *point1 - *point2;
}

int main()
{

    // starting the if else condition loop
    int i = 0;
    while (i <= 10)
    {

        // rules for running the code/game
        printf("operation number -  1. the  custom strlen() function runs\n");
        printf("operation_number - 2. the custom strcpy() runs \n");
        printf("operation_number 3. the custom strcmp() function runs\n");
        printf("operation_number 4. User can exit the loop\n ");
        printf("\n");
        printf("\n");

        // taking string input from the user
        char user_string[100];
        printf("Enter a string of your choice");
        scanf("%s", user_string);

        // taking input from the user for performing operations on the string based on the number chosen by the user
        int operation_number;
        printf("Choose a number for performing operations of your choice on the string");
        scanf("%d", &operation_number);

        if (operation_number == 1)
        {
            printf("The length of the given string is: %d\n", My_strlen(user_string));
            printf("\n");
            printf("\n");
        }

        else if (operation_number == 2)
        {
            char destination[20];
            printf("the copied string is: %s", My_strcopy(user_string, destination));
            printf("\n");
            printf("\n");
        }

        else if (operation_number == 3)
        {
            char user_string2[100];
            printf("You need to enter another string of your choice to see the function work");
            scanf("%s", user_string2);
            printf("the stwo strings have been compared");
            printf("the comparison value is %d", My_strcmp(user_string, user_string2));
            printf("\n");
            printf("\n");
        }
        else if (operation_number == 4)
        {
            break;
        }

        i++;
    }
    return 0;
}
