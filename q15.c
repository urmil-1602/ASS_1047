#include <stdio.h>
int main()
{
int n, i, smallest;

printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
{scanf("%d", &arr[i]);
}
smallest = arr[0]; // assume first element is smallest
for (i = 1; i < n; i++)
{
if (arr[i] < smallest)
{
smallest = arr[i];
}
}
printf("The smallest element is: %d\n", smallest);
return 0;
}
