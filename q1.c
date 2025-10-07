#include <stdio.h>
int main()
{
int num, original, reversed = 0, digit, i, isPrime = 1;
printf("Enter a number: ");
scanf("%d", &num);
// ----- Check Palindrome -----
original = num;
while (num > 0)
{
digit = num % 10;
reversed = reversed * 10 + digit;
num /= 10;
}
// ----- Reset num for prime check -----
num = original;
// ----- Check Prime -----
if (num <= 1)
{isPrime = 0;
}
else
{
for (i = 2; i * i <= num; i++)
{
if (num % i == 0)
{
isPrime = 0;
break;
}
}
}
// ----- Final Check -----
if (isPrime && (original == reversed))
{
printf("%d is a Prime Palindrome.\n", original);
}
else
{
printf("%d is NOT a Prime Palindrome.\n", original);
}
return 0;
}
