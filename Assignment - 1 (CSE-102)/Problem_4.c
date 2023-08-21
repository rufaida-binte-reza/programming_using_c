#include <stdio.h>

int reverse(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main()
{
    printf("Palindrome numbers from 100 to 300:\n");
    for (int i = 100; i <= 300; ++i)
    {
        if (i == reverse(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
