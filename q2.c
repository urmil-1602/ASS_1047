#include <stdio.h>
int main()
{
int a, b, c, d, largest;
printf("Enter four numbers: ");
scanf("%d %d %d %d", &a, &b, &c, &d);
largest = a; // assume first is largest
if (b > largest) largest = b;
if (c > largest) largest = c;
if (d > largest) largest = d;
printf("The largest number is: %d\n", largest);
return 0;
}
