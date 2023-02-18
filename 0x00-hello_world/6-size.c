#include <stdio.h>
/**
 *main - Entry
 *Description: A program that print value of size of varible
 *Return: Always 0
 */
int main(void)
{
char number;
int num;
long int age;
long long int nums;
float doc;
printf("Size of a char: %zu 1 byte(s)\n", sizeof(number));
printf("Size of an int: %zu 4 byte(s)\n", sizeof(num));
printf("Size of a long int: %zu 4 byte(s)\n", sizeof(age));
printf("Size of a long long int: %zu 8 byte(s)\n", sizeof(nums));
printf("Size of a long: %zu 4 byte(s)\n", sizeof(doc));
return (0);
}
