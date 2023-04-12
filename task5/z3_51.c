#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    double amount, interest;
	int years = 0;

	printf("Enter the amount invested: ");
	scanf("%lf", &amount);

	printf("Enter the annual interest rate (as a percentage): ");
	scanf("%lf", &interest);

	double target = 1e6; // 1 million

	// Convert the interest rate to a decimal
	interest /= 100.0;

	while (amount < target) {
		// Calculate the interest earned and add it to the amount
		double earned = amount * interest;
		amount += earned;

		// Increment the number of years
		years++;
	}

	printf("It will take %d years for the investment to reach $1,000,000\n", years);
 system("pause");
	return 0;
}
