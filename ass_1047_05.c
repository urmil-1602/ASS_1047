#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
char str[100];
int i;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin); // read string with spaces
for (i = 0; str[i] != '\0'; i++)
{
if (strchr("aeiou", str[i]))
{
str[i] = toupper(str[i]);
}
}
printf("Modified string: %s\n", str);
return 0;
}

