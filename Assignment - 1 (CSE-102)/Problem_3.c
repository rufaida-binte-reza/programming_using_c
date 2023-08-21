#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    printf("Prime numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; ++i)
    {
        if (is_prime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
