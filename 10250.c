#include <stdio.h>

int main(void)
{
    int T, H[99], W[99], N[99], result[9801];
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d%d%d", &H[i], &W[i], &N[i]);

        if (N[i] % H[i] == 0)
        {
            result[i] = 100 * H[i] + N[i] / H[i];
        }
        else
        {
            result[i] = (N[i] % H[i]) * 100 + (N[i] / H[i] + 1);
        }
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}