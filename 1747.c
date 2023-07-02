#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int isPrime(double number)
{
    if (number <= 1)
    {
        return 0;
    }

    for (double i = 2; i <= sqrt(number); i++)
    {
        if (fmod(number, i) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int isPalindrome(int num)
{
    int original = num;
    int reversed = 0;

    while (num > 0)
    {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    double N;
    scanf("%lf", &N);
    for (double i = N; i <= 1000000; i++)
    {
        if (isPrime(i) == 1)
        {
            // result = isPalindrome(i);
            if (isPalindrome(i) == 1)
            {
                printf("%.0lf", i);
                break;
            }
        }
    }

    return 0;
}
