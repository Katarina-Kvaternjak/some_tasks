/*Find the largest prime factor of a number.*/
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num)
{
    int counter = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            counter += 1;
        }
    }
    if (counter == 0)
    {
        return true;
    }
    else if (counter > 0)
    {
        return false;
    }
}

int calculate(int num)
{
    int is_divisible = 0, divisor;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0 && is_prime(i) == true)
        {
            is_divisible = 1;
            divisor = i;
        }
    }
    if (is_divisible == 1)
    {
        return divisor;
    }
    else
    {
        return num;
    }
}

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", calculate(num));
    return 0;
}
