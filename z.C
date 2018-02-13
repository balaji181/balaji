#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, i, t, t2, remainder, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);

    for(i = low + 1; i < high; ++i)
    {
        t2 = i;
        t = i;

        
        while (t != 0)
        {
            t/= 10;
            ++n;
        }

    
        while (t2 != 0)
        {
            remainder = t2 % 10;
            result += pow(remainder, n);
            t2 /= 10;
        }

        
        if (result == i) {
            printf("%d ", i);
        }


        n = 0;
        result = 0;

    }
    return 0;
}
