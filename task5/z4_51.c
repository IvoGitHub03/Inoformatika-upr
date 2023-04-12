#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{
    int n, num, positive_count = 0, negative_count = 0;
    int i;

	printf("Enter the number of integers: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
     {
		printf("Enter an integer: ");
		scanf("%d", &num);

		if (num > 0) {
			positive_count++;
		}
		else if (num < 0) {
			negative_count++;
		}
	}

	printf("Number of positive integers: %d\n", positive_count);
	printf("Number of negative integers: %d\n", negative_count);

    system("pause");

	return 0;
}
