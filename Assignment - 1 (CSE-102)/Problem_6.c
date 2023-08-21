#include <stdio.h>

void collatz_sequence(int num)
{
    while (num != 1)
    {
        printf("%d, ", num);

        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = 3 * num + 1;
        }
    }

    printf("1\n");
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Collatz sequence for %d: ", number);
    collatz_sequence(number);

    return 0;
}


