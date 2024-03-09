#include <stdio.h>
#include <stdlib.h>

int main()
{
	float montant_pret, taux_interet, montant_estime;
	int duree, i = 10;

	printf("Bein venue chez Chaabi Lil Iskane\n");
	while (i != 0)
	{
		printf("Entrer le monant d'un pret : \n");
		scanf("%f", &montant_pret);
		printf("Entrer la duree par an\n");
		scanf("%d", &duree);
		if (duree < 5)
		{
			printf("Desole la duree acceptable de 5 et plus\n");
			i--;
			if (i == 0)
				break;
			printf("Il/Elle vous rest %d try\n", i);
			continue;
		}
		printf("Entrer le Taux d'interet\n");
		scanf("%f", &taux_interet);
		if (!(taux_interet >= 3 && taux_interet <= 7))
		{
			printf("Desole le taux d'intérêt devrait être entre 3 et 7 (taux annuel)\n");
			i--;
			if (i == 0)
				break;
			printf("Il/Elle vous rest %d try\n", i);
			continue;
		}

		taux_interet = (montant_pret * taux_interet) / 100;
		montant_estime = taux_interet + montant_pret;
		printf("le montant total d'un pret immobilier : %f\n", montant_estime);
		duree = duree * 12;
		montant_estime = montant_estime / duree;
		printf("le montant estime de la mesualite d'un pret immobilier : %f\n", montant_estime);
		break;
	}
	return 0;
}
