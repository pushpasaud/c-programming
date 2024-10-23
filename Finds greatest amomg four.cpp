#include <stdio.h>

int main()
{
    int number1, number2, number3, number4;

    printf("\nEnter the vlaue of number1: ");
    scanf("%d", &number1);

    printf("\nEnter the value of number2: ");
    scanf("%d", &number2);

    printf("\nEnter the value of number3: ");
    scanf("%d", &number3);

    printf("\nEnter the value of number4: ");
    scanf("%d", &number4);

    if(number1 > number2)
    {
        if(number1 >number3)
        {
            if(number1 > number4)
            {
                printf("\n%d is the greatest of four numbers.\n", number1);
            }
        }
    }

    else if(number2 > number3)
    {
        if(number2 > number4)
        {
            printf("\n%d is the greatest of four numbers.\n", number2);
        }
    }

    else if(number3 > number4)
    {
        printf("\n%d is the greatest of four numbers.\n", number3);
    }

    else
    {
        printf("\n%d is the greatest of four numbers.\n", number4);
    }

    return 0;
}
