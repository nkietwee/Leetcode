#include <stdio.h>
int mySqrt(int x)
{
    long i;

    i = 1;
    while (1)
    {
        if (i * i > x)
            return (i - 1);
        else if  (i * i == x)
            return (i);
        i++; 
    }
    return (0);  
}

int main(void)
{
    printf("nbr : %d\n", mySqrt(8));
}