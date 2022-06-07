#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "Header.h"

/*float zbrajanje(float a, float b) {
	/*float n;
	printf("Unesite n:");
	scanf("%f", &n);
	//for (int i = 0; i < n; i++) {
		float zbr = a + b;
	//}

		FILE* fp = NULL;
		fp = fopen("zbroj.bin", "rb");
		if (fp == NULL) {
			perror("Otvaranje datoteke:");
			//exit(EXIT_FAILURE);
		}
		fprintf(fp,"Zbroj:%f",zbr);
		fclose(fp);

	return zbr;

	//fclose(fp);
}
float oduzimanje(float a, float b) {
	float od = a - b;

	return od;
}

float mnozenje(float a, float b) {
	float mn = a * b;

	return mn;
}

float dijeljenje(float a, float b) {
	float di = a / b;

	return di;
}
float postotak(float a, float b) {
	float posto = a * 0.01 * b;

	return posto;
}
float drugi_korjen(float a) {
	float kor = sqrt(a);

	return kor;
}*/

void standardni(void) {
	int izbornik;
	float a, b,c,d,e,f,g,h, rezultat,plus,minus,puta,kroz;
	printf("Odaberite operaciju:\n");
	printf("1 Zbrajanje\n");
	printf("2 Oduzimanje\n3 Mnozenje\n4 Dijeljenje\n5 Postotak\n6 kvadrat\n7 Drugi korjen\n8 1/x\n9 Sortiranje\n10 Izlaz\n");
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

		case 9:
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
		break;

		case 10:
		return ;
		break;
	}
}

/*float apsolutni(float a) {
	if (a < 0) {
		a = a * (-1);
	}
	return a;
}

float mod(int a,int b) {
	float mo = a % b;
	return mo;
}

int faktorijel(int n) {
	printf("Poziv za n = %d, adresa varijable &n = %p.\n", n, &n);
	if (n > 1) {
		return n * faktorijel(n - 1);
	}
	else {
		return 1;
	}
}

void znanstveni(void) {
	int izbornik;
	float a, b, rezultat;
	printf("Odaberite operaciju:\n");
	printf("1 Zbrajanje\n2 Oduzimanje\n3 Mnozenje\n4 Dijeljenje\n5 Apsolutna_vrijednost\n6 Mod\n7 Faktorijel\n8 1/x\n9 Izlaz\n");
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
		rezultat = mod(a,b);
		printf("%f mod %f=%f\n", a, b, rezultat);
		znanstveni();
		break;
	
		case 7:
		int n;
		printf("Unesite broj:");
		scanf("%d", &n);
		int rez = faktorijel(n);
		printf("Faktorijel broja %d je %d.\n", n, rez);
		znanstveni();
		break;
	

	case 9:
		return;
		break;
	}
}*/

