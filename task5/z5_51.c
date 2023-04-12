#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int n, i, F1 = 0, F2 = 1, F;

	printf("Enter the number of Fibonacci numbers to generate: ");
	scanf("%d", &n);

	printf("%d %d ", F1, F2 );


	for (i = 3; i <= n; i++)
	{
			F = F1 + F2;
			F1 = F2;
			F2 = F;
		printf("%d ", F);
	}
	printf("\n");
	susrem("pause");
	return 0;
}

