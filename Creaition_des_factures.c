#include <stdio.h>

int main()
{
	char name[100];
	char payement_mod[100];
	float articles[3][2]; 
	float total_HT = 0, total_TTC, TVA_rate = 0.20, TVA_amount;
	int i;

	printf("Entrez votre nom : ");
	scanf("%s", name);
	printf("entrer le mod de payement : ");
	scanf("%s", payement_mod);

	for (i = 0; i < 3; i++)
	{
		printf("Entrez le prix de l'article %d : ", i+1);
		scanf("%f", &articles[i][0]); 

	
		printf("Entrez la quantité de l'article %d : ", i+1);
		scanf("%f", &articles[i][1]); 

		total_HT += articles[i][0] * articles[i][1];
	}

	TVA_amount = total_HT * TVA_rate;
	total_TTC = total_HT + TVA_amount;

	printf("\nNom du Client : %s\n", name);
	for (i = 0; i < 3; i++)
	{
		printf("Article %d : Prix = %.2f, Quantité = %.2f\n", i+1, articles[i][0], articles[i][1]);
	}
	printf("Total HT : %.2f\n", total_HT);
	printf("Taux de TVA : %.2f\n", TVA_rate);
	printf("Montant de la TVA : %.2f\n", TVA_amount);
	printf("Total TTC : %.2f\n", total_TTC);
	printf("Mode de Paiement : %s\n", payement_mod);

	return 0;
}

