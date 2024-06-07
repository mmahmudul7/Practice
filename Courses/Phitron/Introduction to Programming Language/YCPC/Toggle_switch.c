#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; n > 0; i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }
        int count = 0;
        for (int i = i - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}