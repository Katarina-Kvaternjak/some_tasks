/*If we list all the natural numbers below 1000
 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000. Input any number.*/
#include <stdio.h>
int sum(int n)
{
    int result = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            result += i;
        }
    }
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}
