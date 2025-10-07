#include <stdio.h>
int main()
{
int n;
printf("Enter a positive number: ");
scanf("%d", &n);
printf("First %d natural numbers in reverse order:\n", n);
for (int i = n; i >= 1; i--)
{printf("%d ", i);
}
printf("\n");
return 0;
}
