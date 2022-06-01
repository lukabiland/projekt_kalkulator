#include <iostream>
#include <math.h>
#include "Header.h"
#include <string.h>

int analiticka_geometrija(void) {

	int fn; // u ovu varijablu æemo smjestiti broj kalkulatora 

	printf("Odaberite sto zelite izracunavati!\n");
	printf("1 Udaljenost dviju tocaka\n2 Udaljenost tocke od pravca\n3 Jednadzba pravca kroz dvije tocke\n4 Kvadratna jednadzba\n");
	printf("5 Izlaz\n");
	scanf("%d", &fn);
	TOCKA* pokNaTocku = NULL;
	pokNaTocku = (TOCKA*)calloc(2, sizeof(TOCKA));

	if (pokNaTocku == NULL) {
		return 0;
	}
	switch (fn) {
	case 1:
		float razmak;

		printf("Unesite koordinatu x prve tocke\n");
		scanf("%f", &pokNaTocku->x);
		printf("Unesite koordinatu y prve tocke\n");
		scanf("%f", &pokNaTocku->y);
		printf("Unesite koordinatu x druge tocke\n");
		scanf("%f", &(pokNaTocku + 1)->x);
		printf("Unesite koordinatu y druge tocke\n");
		scanf("%f", &(pokNaTocku + 1)->y);
		razmak = udaljenost_dvije_tocke(pokNaTocku);
		printf("udaljenost izmeðu tocaka je:%f\n", razmak);
		free(pokNaTocku);
		analiticka_geometrija();
		break;
	case 2:
		float k, l, x, y, d;
		printf("Unesite za jednadzbu pravca k i l (od y=kx+l) ");
		scanf("%f", &k);
		scanf("%f", &l);
		printf("Unesite koordinatu x  tocke\n");
		scanf("%f", &pokNaTocku->x);
		printf("Unesite koordinatu y tocke\n");
		scanf("%f", &pokNaTocku->y);
		d = udaljenost_pravac_tocka(pokNaTocku, k, l);
		printf("udaljenost tocke od pravca je:%f\n", d);
		free(pokNaTocku);
		analiticka_geometrija();
		break;
	case 3:

		printf("Unesite koordinatu x  tocke\n");
		scanf("%f", &pokNaTocku->x);
		printf("Unesite koordinatu y tocke\n");
		scanf("%f", &pokNaTocku->y);
		printf("Unesite koordinatu x druge tocke\n");
		scanf("%f", &(pokNaTocku + 1)->x);
		printf("Unesite koordinatu y druge tocke\n");
		scanf("%f", &(pokNaTocku + 1)->y);
		jednadzba_pravca(pokNaTocku);
		free(pokNaTocku);
		analiticka_geometrija();
		break;

	case 4:
		float A, B, C,x1,x2;
		printf("unesite koeficijente kvadratne jednadzbe A, B i C\n");
		scanf(" %f\n%f\n%f", &A, &B, &C);

		if (((B * B) - (4 * A * C)) < 0) {
			printf("diskriminante je manje od nule pa ne postoje realna rjesenja\n");
			break;
		}
		 x1 = rjesenje1(A, B, C);
		printf("prvo rjesenje kvadratne jednadzbe je: %f\n", x1);
		 x2 = rjesenje2(A, B, C);
		printf("drugo rjesenje kvadratne jednadzbe je: %f\n", x2);
		analiticka_geometrija();
		break;


	case 5:
		return -1;
		break;

		
	}
}