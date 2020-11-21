#include <stdio.h>

int main()
{
    int prev, curr, count = 1;
    scanf("%d", &prev);
    scanf("%d", &curr);
    while (curr != -1)
    {
        if (prev != curr)
        {
            count++;
        }
        prev = curr;
        scanf("%d", &curr);
    }
    if (count >= 3)
    {
        printf("1");
    }

    else
    {
        printf("0");
    }

    return 0;
}
