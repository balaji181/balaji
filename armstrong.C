#include <stdio.h>
int main()
{
    int n, o, r, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    o= n;

    while (o != 0)
    {
        r= o%10;
        result += r*r*r;
        o /= 10;
    }     
    if(result== n)
        printf("yes %d is an Armstrong number.",n);
    else
        printf("no %d is not an Armstrong number.",n);

    return 0;
}
