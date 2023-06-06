/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99
Find the largest palindrome made from the product of two 3-digit numbers.*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isPalindrome(int n)
{
    int counter = 0, *array, num = n;
    while (num != 0)
    {
        num /= 10;
        counter += 1;
    }

    array = (int *)malloc(sizeof(int) * counter);
    num = n;

    for (int i = 0; i < counter; i++)
    {
        array[i] = num % 10;
        num = num / 10;
    }
    num = 0;
    // array = realloc(array, sizeof(int) * counter);
    for (int i = counter - 1; i >= 0; i--)
    {
        if (array[i] != array[num])
        {
            free(array);
            return false;
        }
        num += 1;
    }
    free(array);
    return true;
}

int main()
{
    printf("%d\n", isPalindrome(343));
}
