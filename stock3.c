#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[] = {5, 4, 3, 2, 8, 7, 20, 7, 8, 18, 23, 34, 2, 3};
    int max = 0, val = 0, tax = 100;
    int buy, sell, si;
    float pro, tpro = 0;
    char hasStock = 'n';
    int num = 0;
    int n;
    printf("Do you want to have tax added to the profit? 1:2 ::");
    scanf("%d", &n);
    si = sizeof(a) / 4;
    for (int i = 0; i < si; i++)
    {
        if (hasStock == 'n')
        {
        re2:
            if (a[i + 1] > a[i])
            {
                buy = a[i];
            }
            else
            {
                buy = a[i + 1];
                i++;
                goto re2;
            }
            if (i == si - 1)
                break;
            printf("buying at price=%d\n", a[i]);

            hasStock = 'y';
            val++;
        }
        if (hasStock == 'y')
        {
            if (i == si - 2)
            {
                if (a[i + 1] >= buy)
                {
                    i++;
                    sell = a[i];
                }
            }
            else
            {
            re:
                if (a[i + 1] < a[i])
                {
                    sell = a[i];
                }
                else
                {
                    sell = a[i + 1];
                    i++;
                    goto re;
                }
            }
            printf("selling at price=%d\n", a[i]);
            hasStock = 'n';
            val++;
        }
        //  p:
        if (n == 1)
        {
            if (val % 2 == 0)
            {
                pro = sell - buy - .01 * (buy + sell);
                printf("profit =%f\n", pro);
                tpro = tpro + pro;
                buy = 0;
                sell = 0;
            }
        }
        else if (n == 2)
        {
            if (val % 2 == 0)
            {
                pro = sell - buy;
                printf("profit = %f\n", pro);
                tpro = tpro + pro;
                buy = 0;
                sell = 0;
            }
        }
    }
    printf("At last total profit comes from all trades= %f\n", tpro);
}