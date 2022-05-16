#include <stdio.h>

int main()
{
    int max[21], min = 1000;
    int a[] = {5, 6, 3, 5, 8, 2, 7};
    int k = 0;

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[j] - a[i] > 0)
            {
                max[k] = a[j] - a[i];
                k++;
            }
        }
    };
    // printf("%d\n", k);
    int b = k;
    for (int i = b; i < 21; i++)
    {
        max[i] = 0;
    }
    for (int i = 0; i < 21; ++i)
    {
        for (int j = i + 1; j < 21; ++j)
        {
            if (max[i] < max[j])
            {
                int temp;
                temp = max[i];
                max[i] = max[j];
                max[j] = temp;
            }
        }
    }
    int n, sum = 0;
    printf("The number of trades that you want to make? :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        temp = sum;
        sum = max[i] + sum;
    }
    
    printf("Therefore the net profit will be %d\n", sum);
    return 0;
}