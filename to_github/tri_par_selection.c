#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int tableau[], int n)
{
	int i, j, min_index;
	for (i = 0; i < n - 1; i++) {
		min_index = i;
		for (j = i + 1; j < n; j++) {
			if (tableau[j] < tableau[min_index]) {
				min_index = j;
			}
		}
		swap(&tableau[min_index], &tableau[i]);
		printf("Étape %d: ", i + 1);
		for (int k = 0; k < n; k++)
		{
			printf("%d ", tableau[k]);
		}
		printf("\n");
	}
}

int main() {
	srand(time(NULL));

	int tableau[7];
	int i;
	printf("Tableau non trié: ");
	for (i = 0; i < 7; i++) {
		tableau[i] = rand() % 10;
		printf("%d ", tableau[i]);
	}
	printf("\n");

	selectionSort(tableau, 7);

	printf("Tableau trié: ");
	for (i = 0; i < 7; i++) {
		printf("%d ", tableau[i]);
	}
	printf("\n");

	return 0;
}

