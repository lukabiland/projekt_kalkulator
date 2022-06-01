#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "Header.h"

void znanstveni(void) {
	int izbornik,n;
	float a, b, rezultat,pi=3.14,rad,a1,q;

	


	
	

	printf("Odaberite operaciju:\n");
	printf("1 Zbrajanje\n2 Oduzimanje\n3 Mnozenje\n4 Dijeljenje\n5 Apsolutna_vrijednost\n6 Mod\n7 Faktorijel\n8 1/x\n9 Na_kvadrat\n");
	printf("10 x^y\n11 Korijen\n12 Logaritam_po_bazi_10\n13 Prirodni logaritam\n14 Sinus\n15 Kosinus\n16 Tangens\n17 Kotangens\n");
	printf("18 Asin\n19 Acos\n20 Atan\n21 Actg\n22 Aritmeticki niz\n23 Geometrijski niz\n24 Izlaz\n");
	scanf("%d", &izbornik);
	switch (izbornik) {
	case 1:

		printf("Unesite dva broja koja zelite zbrojiti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = zbrajanje(a, b);
		printf("%f+%f=%f\n", a, b, rezultat);
		znanstveni();
		break;

	case 2:
		printf("Unesite dva broja koja zelite oduzeti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = oduzimanje(a, b);
		printf("%f-%f=%f\n", a, b, rezultat);
		znanstveni();
		break;
	case 3:
		printf("Unesite dva broja koja zelite pomnoziti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = mnozenje(a, b);
		printf("%fx%f=%f\n", a, b, rezultat);
		znanstveni();
		break;
	case 4:
		printf("Unesite dva broja koja zelite podijeliti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = dijeljenje(a, b);
		printf("%f:%f=%f\n", a, b, rezultat);
		znanstveni();
		break;

	case 5:
		printf("Unesite broj:");
		scanf("%f", &a);
		//scanf("%f", &b);
		rezultat = apsolutni(a);
		printf("%f=%f\n", a, rezultat);
		znanstveni();
		break;

	case 6:
		printf("Unesite broj:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = mod(a, b);
		printf("%f mod %f=%f\n", a, b, rezultat);
		znanstveni();
		break;

	case 7:
		int n,rez;
		printf("Unesite broj:");
		scanf("%d", &n);
		rez = faktorijel(n);
		printf("Faktorijel broja %d je %d.\n", n, rez);
		znanstveni();
		break;
	case 8:
		//int n, rez;
		float c, d;
		printf("Unesite broj ciju reciprocnu vrijednost zelite izracunati:");
		scanf("%f", &c);
		d= 1/c;
		printf("Reciprocna vrijednost broja %f je %f.\n", c, d);
		znanstveni();
		break;

	case 9:
		printf("Unesite broj koji zelite kvadrirati:");
		scanf("%f", &a);

		rezultat = mnozenje(a, a); //pozivamo funkciju mnozenje i dajemo joj 2 puta isti broj, kako bi dobili kvadrat
		printf("%f^2=%f\n", a, rezultat);
		znanstveni();
		break;

	case 10:
		printf("Unesite bazu x i eksponent y:");
		scanf("%f", &a);
		scanf("%f", &b);

		rezultat = x_na_y(a, b); //pozivamo funkciju mnozenje i dajemo joj 2 puta isti broj, kako bi dobili kvadrat
		printf("%f^%f=%f\n", a, b ,rezultat);
		znanstveni();
		break;

	case 11:
		printf("Unesite broj koja zelite korjenovati:");
		scanf("%f", &a);

		rezultat = drugi_korjen(a);
		printf("Drugi korjen od %f=%f\n", a, rezultat);
		znanstveni();
		break;

	case 12:
		printf("Unesite broj koji zelite logaritmirati:");
		scanf("%f", &a);

		rezultat = log10(a);
		printf("Logaritam broja %f po bazi 10 je %f\n",a, rezultat);
		znanstveni();
		break;

	case 13:
		printf("Unesite broj koji zelite logaritmirati:");
		scanf("%f", &a);

		rezultat =log(a);
		printf("Prirodni logaritam od broja %f je %f\n", a, rezultat);
		znanstveni();
		break;

	case 14:
		printf("Unesite kut u stupnjevima:");
		scanf("%f", &a);

		rad = a * (pi / 180);

		rezultat = sin(rad);
		printf("Sinus od kuta %f je %f\n", a, rezultat);
		znanstveni();
		break;

	case 15:
		printf("Unesite kut u stupnjevima:");
		scanf("%f", &a);

		rad = a * (pi / 180);

		rezultat = cos(rad);
		printf("Kosinus od kuta %f je %f\n", a, rezultat);
		znanstveni();
		break;

	case 16:
		printf("Unesite kut u stupnjevima:");
		scanf("%f", &a);

		rad = a * (pi / 180);

		rezultat = tan(rad);
		printf("Tangens od kuta %f je %f\n", a, rezultat);
		znanstveni();
		break;

	case 17:
		printf("Unesite kut u stupnjevima:");
		scanf("%f", &a);

		rad = a * (pi / 180);

		rezultat =1/(tan(rad));
		printf("Kotangens od kuta %f je %f\n", a, rezultat);
		znanstveni();
		break;

	case 18:
		printf("Unesite broj:");
		scanf("%f", &a);
		/*printf("Unesite broj:");
		scanf("%f", &b);*/

		//rad = a * (pi / 180);

		rezultat = asin(a) * 180 / pi;

		//rezultat = asin(a);
		printf("Rezultat je %f\n", rezultat);
		znanstveni();
		break;

	case 19:
		printf("Unesite broj:");
		scanf("%f", &a);
		/*printf("Unesite broj:");
		scanf("%f", &b);*/

		//rad = a * (pi / 180);

		rezultat = acos(a) * 180 / pi;

		//rezultat = asin(a);
		printf("Rezultat je %f\n", rezultat);
		znanstveni();
		break;

	case 20:
		printf("Unesite broj:");
		scanf("%f", &a);
		/*printf("Unesite broj:");
		scanf("%f", &b);*/

		//rad = a * (pi / 180);

		rezultat = atan(a) * 180 / pi;

		//rezultat = asin(a);
		printf("Rezultat je %f\n", rezultat);
		znanstveni();
		break;

	case 21:
		printf("Unesite broj:");
		scanf("%f", &a);
		/*printf("Unesite broj:");
		scanf("%f", &b);*/

		//rad = a * (pi / 180);

		rezultat = (1/atan(a)) * 180 / pi;

		//rezultat = asin(a);
		printf("Rezultat je %f\n", rezultat);
		znanstveni();
		break;

	case 22:
		printf("Unesite broj clanova aritmetickog niza:\n");
		scanf("%d", &n);
		printf("Unesite prvi clan aritmetickog niza:\n");
		scanf("%f", &a1);
		printf("Unesite diferenciju d aritmetickog niza:\n");
		scanf("%f", &d);
		aniz(a1, n, d);
		znanstveni();
		break;

	case 23:
		printf("Unesite broj clanova geometrijskog niza:\n");
		scanf("%d", &n);
		printf("Unesite prvi clan geometrijskog niza:\n");
		scanf("%f", &a1);
		printf("Unesite kvocjent q geometrijskog niza:\n");
		scanf("%f", &q);
		gniz(a1, n, q);
		znanstveni();
			break;

	case 24:
		return ;
		break;
	}
}