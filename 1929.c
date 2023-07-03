#include <stdio.h>

int isPrime(int number)
{
    if (number <= 1)
    {
        return 0; // 0 and 1 are not prime
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0; // number is divisible by i, so it's not prime
        }
    }

    return 1; // number is prime
}

int main(void)
{
    int firstNum, lastNum;
    scanf("%d%d", &firstNum, &lastNum);

    for (int i = firstNum; i <= lastNum; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}