#include <stdio.h>

int main()
{
    int a[] = {5, 6, 3, 5, 8, 2, 7};
    int max = 0, tax = 100;
    float pro;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if (a[j] - a[i] > 0)
            {
                int l, t;
                l= a[j]- a[i];
                if (l>=max){
                    max=l;
                    t = a[i] + a[j];
                    if (t< tax){
                        tax=t;
                    }
                }
                printf("max = %d and tax = %d\n", max, tax);
            }
        }
    }
    //printf("you should buy on day %d at rate of %d and sell on %d at the rate of %d\nmaximum profit will be=%f", d1 + 1, a[d1], d2 + 1, a[d2], max + .01 *
    printf("%f\n", max- 0.01*tax);
}