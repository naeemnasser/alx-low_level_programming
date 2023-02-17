#include<stdio.h>
#include<time.h>
#include<stdlib>
/**
 * main - main block
 * Description: print all signils digits number of bbsw
 * staring from 0 ..,how 
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return(0);
}
