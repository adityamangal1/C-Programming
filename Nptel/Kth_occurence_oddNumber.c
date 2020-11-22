#include <stdio.h>

int find_odd(int n)
{
    if (n % 2 != 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int occur, num, occur_index = 0, k, final_num;
    scanf("%d", &k);
    scanf("%d", &num);
    if (num != -1)
    {
        while (num != -1)
        {
            occur = find_odd(num);
            if (occur == 1)
            {
                occur_index += 1;
            }
            if (occur_index == k && occur == 1)
            {
                final_num = num;
            }
            scanf("%d", &num);
        }
    }

    printf("%d", final_num);

    return 0;
}