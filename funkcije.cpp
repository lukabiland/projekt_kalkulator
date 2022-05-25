#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "Header.h"

float zbrajanje(float a, float b) {
	float zbr = a + b;

	return zbr;
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
}

float apsolutni(float a) {
	if (a < 0) {
		a = a * (-1);
	}
	return a;
}

float mod(int a, int b) {
	float mo = a % b;
	return mo;
}

int faktorijel(int n) {
	//printf("Poziv za n = %d, adresa varijable &n = %p.\n", n, &n);
	if (n > 1) {
		return n * faktorijel(n - 1);
	}
	else {
		return 1;
	}
}

float x_na_y(int x, int y) {
	float rez = pow(x,y);
	return rez;
}

int dec_to_bin(long long dec) {
	int pos=1,bin=0;
	do {
		bin = bin + (dec % 2) * pos;
		dec = dec / 2;
		pos *= 10;
	} while (dec > 0);
	return bin;
}

int dec_to_oct(long long dec) {
	int pos = 1, oct = 0;
	do {
		oct = oct + (dec % 8) * pos;
		dec = dec / 8;
		pos *= 10;
	} while (dec > 0);
	return oct;
}

int dec_to_hex(long long dec) {
	int pos = 1, hex = 0;
	do {
		hex = hex + (dec % 16) * pos;
		dec = dec / 16;
		pos *= 10;
	} while (dec > 0);
	return hex;
}

int bin_to_dec(long long binn) {
	int i = 0, decc = 0,rem;
	do {
		rem = binn % 10;
		binn /= 10;
		decc += rem * pow(2, i);
		i++;
	} while (binn != 0); 
	return decc;
}

int bin_to_oct(long long binn) {
	int i = 0, decc = 0, okt=0;
	
	do {
		decc += (binn % 10) * pow(2, i);
		i++;
		binn /= 10;
	} while (binn != 0);
	i = 1;
	do {
		okt += (decc % 8) * i;
		decc /= 8;
		i *= 10;
	} while (decc != 0);
	return okt;
}

int bin_to_hex(long long binn) {
	int i = 1, rem, hex = 0;

	do {
		rem = binn % 10;
		hex = hex + rem * i;
		i = i * 2;
		binn = binn / 10;
	} while (binn != 0);
	return hex;
}

int hex_znam(char znam) {
	if ((znam > 47) && (znam < 58)) {
		return znam - 48;
	}
	else if ((znam > 64) && (znam < 71)) {
		return znam - 55;
	}
	else if ((znam > 96) && (znam < 103)) {
		return znam - 87;
	}
	else return -1;
}
long long hex_to_dec(char* hexbroj, int duzina) {
	int  znamenka;
	long long dekadski = 0;
	for (int i = 0; i < duzina; i++) {
		znamenka = hex_znam(hexbroj[i]);
		if (znamenka == -1) {
			break;
			return -1;
		}
		dekadski = dekadski + znamenka * pow(16, (duzina - i - 1));
	}
	return dekadski;
}

int oct_to_dec(int n) {
	int p = 0, dec = 0,r;

	do {
		r = n % 10;
		n = n / 10;
		dec = dec + r * pow(8,p);
		p++;
	} while (n > 0);
	return dec;
}

/*int sklop_I() {

	printf("Unesite ")
}*/

float opseg_kvadrata(float a) {
	float p,o,d;
	o = 4 * a;
	return o;
}

float povrsina_kvadrata(float a) {
	float p, o, d;
	p = a * a;
	return p;
}

float dijagonala_kvadrata(float a) {
	float p, o, d;
	d = a * sqrt(2);
	return d;
}

float opseg_pravokutnika(float a,float b) {
	float p, o, d;
	o = 2*(a+b);
	return o;
}

float povrsina_pravokutnika(float a,float b) {
	float p, o, d;
	p = a * b;
	return p;
}

float dijagonala_pravokutnika(float a,float b) {
	float p, o, d;
	d = sqrt((a*a)+(b*b));
	return d;
}

float oplosje_kvadra(float a, float b, float c) {
	float o,d,v;
	o = 2*((a*b)+(b*c)+(a*c));
	return o;
}

float obujam_kvadra(float a, float b, float c) {
	float o, d, v;
	v = a * b * c;
	return v;
}

float dijagonala_kvadra(float a, float b, float c) {
	float o, d, v;
	d = sqrt((a*a)+(b*b)+(c*c));
	return d;
}

float oplosje_kocke(float a) {
	float o, d, v;
	o = 6 * (a * a);
	return o;
}

float obujam_kocke(float a) {
	float o, d, v;
	v = a * a * a;
	return v;
}

float plosna_dijagonala_kocke(float a) {
	float o, plos_di, v;
	plos_di = a*sqrt(2);
	return plos_di;
}

float prostorna_dijagonala_kocke(float a) {
	float o, prost_di, v;
	prost_di = a * sqrt(3);
	return prost_di;
}

float udaljenost_dvije_tocke(TOCKA* poknatocku) {
	float udaljenost;
	udaljenost = sqrt(pow((((poknatocku + 1)->x) - (poknatocku->x)), 2) + pow((((poknatocku + 1)->y) - (poknatocku->y)), 2));
	return udaljenost;
}


float udaljenost_pravac_tocka(TOCKA* poknatocku, float k, float l) {
	float udaljenost;
	//jednadzba za udaljenost pravca od ravnine glasi: d=|kx0+l-y0|/sqrt(k*k+1)
	float brojnik, nazivnik;
	brojnik = k * poknatocku->x + l + poknatocku->y;
	if (brojnik < 0) brojnik = brojnik * (-1);
	nazivnik = sqrt(k * k + 1);
	udaljenost = brojnik / nazivnik;
	return udaljenost;
}


void jednadzba_pravca(TOCKA* poknatocku) {
	//jednadzba pravca kroz dvije tocke glasi: y-y1=((y2-y1)/(x2-x1))*(x-x1)
	//izraz (y2-y1)/(x2-x1) cemo izraèunati i oznaèiti kao z, pa imamo z=(y2-y1)/(x2-x1)
	//odnosno y-y1=z*(x-x1), dalje y=z*x-z*x1+y1 odnosno l=z*x1+y1 i na kraju imamo izraz y=kx+l 
	float z, l, k;

	z = (((poknatocku + 1)->y) - (poknatocku->y)) / (((poknatocku + 1)->x) - (poknatocku->x));
	k = z;
	//printf("Z=%f", z);
	l = (poknatocku->y) - z * (poknatocku->x);
	printf("Jednadzba pravca kroz dvije tocke glasi: y=%fx+%f", k, l);

}


/*void standardni(void) {
	int izbornik;
	float a, b, rezultat;
	printf("Odaberite operaciju:\n");
	printf("1 Zbrajanje\n2 Oduzimanje\n3 Mnozenje\n4 Dijeljenje\n5 Postotak\n6 kvadrat\n7 Drugi korjen\n8 1/x\n9 Izlaz\n");
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

		rezultat = mnozenje(a, a);
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
		return;
		break;
	}
}

float apsolutni(float a) {
	if (a < 0) {
		a = a * (-1);
	}
	return a;
}

float mod(int a, int b) {
	float mo = a % b;
	return mo;
}*/
/*
int faktorijel(int n) {
	printf("Poziv za n = %d, adresa varijable &n = %p.\n", n, &n);
	if (n > 1) {
		return n * faktorijel(n - 1);
	}
	else {
		return 1;
	}
}
*/
/*void znanstveni(void) {
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
		rezultat = mod(a, b);
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
