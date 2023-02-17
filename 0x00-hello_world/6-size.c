#include <stdio.h>
/**
 *main - A program that print value of size of varible
 *Return: Always 0
 */
int main(void)
{
char number;
int num;
long int age;
long long int nums;
float doc;
printf("size of char: %zu byte(s)\n", sizeof(number));
printf("size of int: %zu byte(s)\n", sizeof(num));
printf("size of long int: %zu byte(s)\n", sizeof(age));
printf("size of long long int: %zu byte(s)\n", sizeof(nums));
printf("size of float: %zu byte(s)\n", sizeof(doc));
return (0);
}
