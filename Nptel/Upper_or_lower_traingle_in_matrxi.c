#include <stdio.h>
int main()
{
    int is_upper = 1, is_lower = 1, n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a);
            if (i > j && a != 0)
            {
                is_upper = 0;
            }
            else if (i < j && a != 0)
            {
                is_lower = 0;
            }
        }
    }
    if (is_upper == 1 && is_lower == 1)
    {
        printf("2");
    }
    else if (is_lower == 1)
    {
        printf("-1");
    }
    else if (is_upper == 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}

