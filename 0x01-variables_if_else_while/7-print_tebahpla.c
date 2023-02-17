#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - main block
 * Description: prints all singls int digitnum oof base 10
 * starting form 0
 * Return: 0
 */
int main(void)
{

	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
