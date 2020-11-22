#include <stdio.h>
int main()
{
    float prev, current;
    scanf("%f", &prev);
    if (prev != -1)
    {
        scanf("%f", &current);
        while (current != -1)
        {
            printf("%0.1f", (prev + current) / 2);
            prev = current;
            scanf("%f", &current);
            if (current != -1)
            {
                printf(" ");
            }
        }
    }

    return 0;
}