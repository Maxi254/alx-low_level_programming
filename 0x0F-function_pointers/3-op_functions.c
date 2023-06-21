#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - sums up two numbers
 *@a: First argument
 *@b: Second argument.
 *Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substracts two numbers
 *@a: The first argument
 *@b: The second argument
 *Return: sub of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - product of two numbers
 *@a: first argument
 *@b: The second argument
 *Return: Product of a and b.
 */

int op_mul(int a, int b)
{

	return (a * b);

}

/**
 *op_div - division of two numbers.
 *@a: first argument
 *@b: second argument
 *Return: Quotient of a and b.
*/

int op_div(int a, int b)
{

	return (a / b);

}

/**
 *op_mod - modular of two numbers.
 *@a: first argument.
 *@b: second argument.
 *Return: modular of a and b.
*/

int op_mod(int a, int b)
{

	return (a % b);

}
