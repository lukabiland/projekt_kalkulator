#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "Header.h"

int main(void) {
	int izbornik;

	printf("Odaberite vrstu kalkulatora!");
	printf("\n");
	printf("1.Standardni");
	printf("\n");
	printf("2.Znanstveni");
	printf("\n");
	printf("3.Programerski");
	printf("\n");
	printf("4.Geometrija");
	printf("\n");
	printf("5.Analiticka geometrija");
	printf("\n");
	printf("6.Izlaz");
	printf("\n");
	scanf("%d", &izbornik);

	switch (izbornik) {
	case 1:
		printf("1.Standardni\n");
		standardni();
		main();
		break;

	case 2:
		printf("2.Znanstveni\n");
		znanstveni();
		main();
		break;

	case 3:
		printf("3.Programerski\n");
		programerski();
		main();
		break;

		/*case '4':
			printf("4.Kvadratna funkcija");
			break;*/

	case 4:
		printf("4.Geometrija\n");
		geometrija();
		main();
		break;

	case 5:
		printf("5.Analiticka geometrija\n");
		analiticka_geometrija();
		main();
		break;

	case 6:
		printf("6.Izlaz\n");
		//main();
		//return 1;
		break;
	}
	return 0;
}