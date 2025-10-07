#include <stdio.h>
int main()
{
float meters, centimeters;
printf("Enter length in meters: ");scanf("%f", &meters);
centimeters = meters * 100; // 1 meter = 100 cm
printf("%.2f meters = %.2f centimeters\n", meters, centimeters);
return 0;
}
