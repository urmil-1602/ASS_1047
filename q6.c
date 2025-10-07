#include <stdio.h>
int main()
{
int n, i;

printf("Enter number of elements: ");
scanf("%d", &n);

int arr[n];
long long product = 1;

printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
product *= arr[i]; // multiply directly while reading
}
printf("Product of array elements = %lld\n", product);
return 0;
}
