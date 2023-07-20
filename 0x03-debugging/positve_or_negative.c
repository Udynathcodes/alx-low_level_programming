#include <stdio.h>
/**
 * positive_or_negative - Checks if a number is positive, negative, or zero
 * @r: The number to check
 */
void positive_or_negative(int r)
{
    if (r > 0)
        printf("%d is positive\n", r);
    else if (r < 0)
        printf("%d is negative\n", r);
    else
        printf("%d is zero\n", r);
}
