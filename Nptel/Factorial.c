#include <stdio.h>
int main()
{
    int fact, n, fact_index = 2;
    printf("Enter the number\n");
    scanf("%d", &n);
    fact = 1;
    while (fact <= n)
    {
        printf("%d", fact);
        fact = fact * fact_index;
        fact_index += 1;
        printf(" ");
    }
    return 0;
}

