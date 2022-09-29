#include "main.h"
int calculo_primo(int num_, int inf);
/**
* _sqrt_recursion - function that concatenates two strings.
* @n: is number to calculate.
*
* Return: pointer to destination string.
*/

int is_prime_number(int n)
{
	int a = 2;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (calculo_primo(n, a));
}
/**
 * calculo_primo - function that returns 1 if the input integer is a prime.
 *@num_: first value
 *@inf: second value
 *
 * Return: Return solution
 */
int calculo_primo(int num_, int inf)
{
	if (num_ / 2 < inf)
		return (1);
	if (num_ % inf == 0)
		return (0);
	return (calculo_primo(num_, inf + 1));
}
