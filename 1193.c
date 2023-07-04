#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);

    int line = 1;
    while (X > line)
    {
        X -= line;
        line++;
    }

    if (line % 2 == 0)
    {
        printf("%d/%d\n", X, line - X + 1);
    }
    else
    {
        printf("%d/%d\n", line - X + 1, X);
    }

    return 0;
}
