#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	int check_number[1000];
	int i = 0;

	printf("Entrer un nombre\n");
	scanf("%d", &number);

	while (number != 0)
	{
		check_number[i] = number % 10;
		number = number / 10;
		i++;
	}

	int j = 0;
	int k = i - 1;
	while (j < k)
	{
		if (check_number[j] != check_number[k])
		{
			printf("number is not palindrom\n");
			return 0;
		}
		j++;
		k--;
	}
	printf("number is palindrom\n");
	return (0);
}
