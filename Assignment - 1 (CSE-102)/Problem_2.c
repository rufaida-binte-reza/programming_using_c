#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; ++i)
        {
        if (i > 80 && i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
