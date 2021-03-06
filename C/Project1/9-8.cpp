#include <stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while (scanf_s("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter nex pair of number or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	
	if (p == 0)
	{
		if (n == 0)
			printf("No mean!\n");
		pow = 1;
	}
	else if(n == 0)
	{
		pow = 0;
	}
	else if(p > 0)
	{
		pow = n * power(n, p - 1);
	}
	else
	{
		pow = 1 / power(n, -p);
	}
	return pow;
}