#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "Header.h"

void standardni(void) {
	int izbornik;
	//int polje[] = { plus,minus,puta,kroz }, n = -1;
	float a, b, c, d, e, f, g, h, rezultat, plus, minus, puta, kroz;
	printf("Odaberite operaciju:\n");
	printf("1 Zbrajanje\n");
	printf("2 Oduzimanje\n3 Mnozenje\n4 Dijeljenje\n5 Postotak\n6 kvadrat\n7 Drugi korjen\n8 1/x\n9 Izlaz\n");
	scanf("%d", &izbornik);
	switch (izbornik) {
	case 1:
		
		printf("Unesite dva broja koja zelite zbrojiti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = zbrajanje(a, b);
		printf("%f+%f=%f\n", a, b, rezultat);
		standardni();
		break;

	case 2:
		printf("Unesite dva broja koja zelite oduzeti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = oduzimanje(a, b);
		printf("%f-%f=%f\n", a, b, rezultat);
		standardni();
		break;
	case 3:
		printf("Unesite dva broja koja zelite pomnoziti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = mnozenje(a, b);
		printf("%fx%f=%f\n", a, b, rezultat);
		standardni();
		break;
	case 4:
		printf("Unesite dva broja koja zelite podijeliti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = dijeljenje(a, b);
		printf("%f:%f=%f\n", a, b, rezultat);
		standardni();
		break;
	case 5:
		printf("Unesite postotak i broj:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = postotak(a, b);
		printf("%f posto od %f=%f\n", a, b, rezultat);
		standardni();
		break;
	case 6:
		printf("Unesite broj koja zelite kvadrirati:");
		scanf("%f", &a);

		rezultat = mnozenje(a, a); //pozivamo funkciju mnozenje i dajemo joj 2 puta isti broj, kako bi dobili kvadrat
		printf("%f^2=%f\n", a, rezultat);
		standardni();
		break;
	case 7:
		printf("Unesite broj koja zelite korjenovati:");
		scanf("%f", &a);

		rezultat = drugi_korjen(a);
		printf("Drugi korjen od %f=%f\n", a, rezultat);
		standardni();
		break;

		case 8:
		printf("Unesite broj ciju reciprocnu vrijednost zelite izracunati:");
		scanf("%f", &a);

		rezultat = 1 / a;
		printf("Reciprocna vrijednost broja %f=%f\n", a, rezultat);
		standardni();
		break;

		/*case 9:
			printf("Unesite dva broja koja zelite zbrojiti:");
			scanf("%f", &a);
			scanf("%f", &b);

			printf("Unesite dva broja koja zelite oduzeti:");
			scanf("%f", &c);
			scanf("%f", &d);

			printf("Unesite dva broja koja zelite pomnoziti:");
			scanf("%f", &e);
			scanf("%f", &f);

			printf("Unesite dva broja koja zelite podijeliti:");
			scanf("%f", &g);
			scanf("%f", &h);

			plus = zbrajanje(a,b);
			minus = oduzimanje(c,d);
			puta = mnozenje(e,f);
			kroz = dijeljenje(g,h);

			printf("%f\n", plus);
			printf("%f\n", minus);
			printf("%f\n", puta);
			printf("%f\n", kroz);



		

		standardni();
		break;*/

		case 9:
		return ;
		break;
	}
}