#include <stdio.h>
void main()
{
    int n, i, j, temp, a[20], max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            max = a[i + 1];
            printf("second max=%d", max);
            break;
        }
    }
}