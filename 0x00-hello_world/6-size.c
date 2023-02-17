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
printf("size of char: %i byte(s)\n", sizeof(number));
printf("size of int: %i byte(s)\n", sizeof(num));
printf("size of long int: %i byte(s)\n", sizeof(age));
printf("size of long long int: %i byte(s)\n", sizeof(nums));
printf("size of float: %i byte(s)\n", sizeof(doc));
return (0);
}
