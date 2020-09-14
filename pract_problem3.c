#include <stdio.h>

int main()
{

    int a;
    int b;
    int c;
    int var = 1;
    int var2 = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a > b > c) && (a < b < c))
    {

        printf("%d", var);
    }
    else
    {
        printf("%d", var2);
    }

    return 0;
}