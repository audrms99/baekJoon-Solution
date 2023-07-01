#include <stdio.h>

/*
int main(void)
{
    int A, B, V;
    int days = 1, length = 0;
    scanf("%d%d%d", &A, &B, &V);

    while (1)
    {
        length += A;
        if (length >= V)
        {
            break;
        }
        length -= B;
        days++;
    }
    printf("%d", days);
    return 0;
}
*/

int main(void)
{
    int A, B, V;
    scanf("%d%d%d", &A, &B, &V);
    int days = (V - B - 1) / (A - B) + 1;
    printf("%d", days);
    return 0;
}