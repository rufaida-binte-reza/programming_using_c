#include <stdio.h>
#include <math.h>

int is_armstrong(int num)
{
    int original = num;
    int sum = 0;
    int num_digits = 0;

    while (num > 0)
    {
        num /= 10;
        num_digits++;
    }

    num = original;

    while (num > 0)
    {
        int digit = num % 10;
        sum += pow(digit, num_digits);
        num /= 10;
    }

    return sum == original;
}

int main()
{
    printf("Armstrong numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; ++i)
    {
        if (is_armstrong(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
