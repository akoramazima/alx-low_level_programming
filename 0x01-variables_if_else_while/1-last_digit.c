#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is positive, zeero, or negative
*
* Description: using the main function
* this program prints "programming is positive, zero, and negative
* Return: 0
*/
int main(void)
{
int n;
int l;

srand(time(0));
n = rand( ) - RAND_MAX / 2;
l = n % 10;

if (1 > 5)
{
        printf("last digit of %d is %d and is greater than s\n", n, l);
}
else if (1 == 0)
{
       printf("last digit of %d is %d and is 0\n", n, l);
}
else
{
      printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return(0);
}
