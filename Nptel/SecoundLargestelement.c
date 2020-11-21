#include <stdio.h>
int main()
{
    int max1, max2, num;
    scanf("%d", &num);
    max1 = max2 = num;
    while (num != -1)
    {
        if (num > max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2 && num < max1)
        {

            max2 = num;
        }
        scanf("%d", &num);
    }
    if (max2 != max1)
    {

        printf("%d", max2);
    }
    else
    {
        printf("0");
    }

    return 0;
}