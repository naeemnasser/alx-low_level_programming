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
printf("size of a char: %zu byte(s)\n", sizeof(number));
printf("size of an int: %zu byte(s)\n", sizeof(num));
printf("size of a long int: %zu byte(s)\n", sizeof(age));
printf("size of a long long int: %zu byte(s)\n", sizeof(nums));
printf("size of a float: %zu byte(s)\n", sizeof(doc));
return (0);
}
