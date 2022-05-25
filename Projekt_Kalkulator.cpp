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
	printf("4.Kvadratna funkcija");
	printf("\n");
	printf("5.Geometrija");
	printf("\n");
	printf("6.Analiticka geometrija");
	printf("\n");
	printf("7.Izlaz");
	printf("\n");
	scanf("%d", &izbornik);

	switch (izbornik) {
	case 1:
		printf("1.Standardni\n");
		standardni();
		main();
			//break;

	case 2:
		printf("2.Znanstveni\n");
		znanstveni();
		main();
		//break;

	case 3:
		printf("3.Programerski\n");
		programerski();
		main();
		//break;
	
	/*case '4':
		printf("4.Kvadratna funkcija");
		break;*/

	case 5:
		printf("5.Geometrija\n");
		geometrija();
		main();
		break;

case 6:
		printf("6.Analiticka geometrija\n");
		analiticka_geometrija();
		main();
		break;

	/*case 7:
		printf("7.Izlaz");
		return;
		break;*/
}
	return 0;
}