#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _101-mul.c
  * @print_int - prints an integer.
  * @n: int
  * Return: 0 ...
  */

void print_int(unsigned long int n){

	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10);

	for (; divisor >= 1; n %= divisor, divisor /= 10){
	
		resp = n / divisor;
		_putchar('0' + resp);
	}

}

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
