#include <stdio.h>
int main()
{
int num, i, isPrime = 1;
printf("Enter a number: ");
scanf("%d", &num);
if (num <= 1)
{
isPrime = 0; // 0 and 1 are not prime
}
else
{
for (i = 2; i * i <= num; i++)
{
if (num % i == 0)
{
isPrime = 0;break;
}
}
}
if (isPrime)
printf("%d is a Prime number.\n", num);
else
printf("%d is NOT a Prime number.\n", num);
return 0;
}
