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

    if (a + b > c)
    {

        printf("%d\n", var);
    }

    else if (a + b <= c)
    {

        printf("%d\n", var2);
    }

    else
    {
        printf("Something Gone Wrong!");
    }

    return 0;
}