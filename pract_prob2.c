#include <stdio.h>

int main()
{

    int a;
    int b;
    int var = 1;
    int var2 = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a % b == 1)
    {

        printf("%d", var);
    }

    else
    {

        printf("%d", var2);
    }

    return 0;
}