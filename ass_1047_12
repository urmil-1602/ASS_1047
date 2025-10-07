#include <stdio.h>
#include <ctype.h>
int main()
{
char str[100];
int i, consonants = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin); // read string with spaces
for (i = 0; str[i] != '\0'; i++)
{
char ch = tolower(str[i]); // convert to lowercase
if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
|| ch == 'u'))
{
consonants++;
}
}
printf("Number of consonants = %d\n", consonants);
return 0;
}
