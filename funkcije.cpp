#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "Header.h"
#define M_PI 3.14159265359

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

float trokut(float a, float b, float c) {
	float x;
	if ((a + b < c || a + c < b || b + c < a)) {
		x = 0;
	}
	else if (a == b && a != c) {
		x = 2;
	}
	else if (a != c && a != b && c != b) {
		x = 3;
	}
	else if (b == c && a != c) {
		x = 2;
	}
	else if (a == c && b != c) {
		x = 2;
	}
	else if (a == b && a == c) {
		x = 1;
	}
	return x;
}

float opseg_trokuta(float a, float b, float c) {
	float o, p;
	if (a == b && a != c) {
	o = (2*a)+b;
	}
	else if (a != c && a != b && c != b) {
		o = a + b + c;
	}
	else if (b == c && a != c) {
		o = (2 * a) + b;
	}
	else if (a == c && b != c) {
		o = (2 * a) + b;
	}
	else if (a == b && a == c) {
		o = 3 * a;
	}
	return o;
}

float povrsina_trokuta(float a, float b, float c,float s) {
	float o, p;
	//s =(1/2.)*(a + b + c);
	if (a == b && a != c) {
		p=sqrt(s*(s-a)*(s-b)*(s-c));
	}
	else if (a != c && a != b && c != b) {
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	else if (b == c && a != c) {
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	else if (a == c && b != c) {
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	else if (a == b && a == c) {
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	return p;
}

float udaljenost_dvije_tocke(TOCKA* poknatocku) {
	float udaljenost;
	udaljenost = sqrt(pow((((poknatocku + 1)->x) - (poknatocku->x)), 2) + pow((((poknatocku + 1)->y) - (poknatocku->y)), 2));
	return udaljenost;
}

float obujam_stosca(float r,float h) {
	float o, d, v;
	v = (1/3.)*(r*r)*M_PI*h;
	return v;

}

float oplosje_stosca(float r,float s) {
	float o, d, v;
	o = r*M_PI*(r+s);
	return o;
}


float obujam_valjka(float r, float h) {
	float o, d, v;
	v = (r*r)*M_PI*h;
	return v;

}

float oplosje_valjka(float r, float h) {
	float o, d, v;
	o = 2*r*M_PI*(r+h);
	return o;
}

float obujam_kugle(float r) {
	float o, v;
	v = (4/3.)*(r*r*r)*M_PI;
	return v;

}

float oplosje_kugle(float r) {
	float o, v;
	o = 4*(r*r)*M_PI;
	return o;
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

float rjesenje1(float A, float B, float C) {
	float x1;
	x1 = ((-B + sqrt(B * B - (4 * A * C))) / (2 * A));
	return x1;
}

float rjesenje2(float A, float B, float C) {
	float x2;
	x2 = ((-B - sqrt(B * B - (4 * A * C))) / (2 * A));
	return x2;
}

long long dec_to_bin_dv(long long dec) {
	long long pos = 1, bin = 0;
	do {
		bin = bin + (dec % 2) * pos;
		dec = dec / 2;
		pos *= 10;
	} while (dec > 0);
	return bin;
}


char ieee754_jednostruko(float rbroj, char* ie1) {
	char p, chk;
	float temp;
	int be = 0, karakteristika = 0;
	long long k = 0;

	if (rbroj < 0) { //najprije postavljamo apsolutnu vrijednost.
		rbroj = rbroj * (-1);	//ako je broj bio negativan u varijablu p postavimo 1, ako je bio pozitivina postavimo 0
		p = '1';
	}
	else {
		p = '0';
	}

	temp = rbroj;
	if (rbroj > 2) { //ako je apsolutna vrijednost veæa od 2 imamo slijedeæi postupak
		do
		{
			be++;			//broj dijelimo s dva dok rezultat ne bude manji od 2, i brojimo koliko smo puta dijelili
			temp = temp / 2;  //to je "be"

		} while (temp >= 2);
		rbroj = rbroj / pow(2, be);//broj dijelimo s 2^be
		k = be + 127; //karakteristika je be+127
		karakteristika = dec_to_bin(k); //preraèunavamo karakteristiku iz dekadskog u binarni


		rbroj = rbroj - 1; //oduzimamo 1 kako bi ostala vrijednost desno od zareza (decimale)
		mantisa(rbroj, ie1);//izraèunavamo mantisu
	}
	else if ((rbroj < 1) && (rbroj > 0)) { //ako je broj manji od 1 i veæi od 0 ide malo drugaèiji postupak
		be = 0;
		do
		{
			be++;
			rbroj = rbroj * 2;

		} while (rbroj < 1); //množimo s dva dok broj ne bude veæi od 1
		be = be * (-1); //be mora biti negativan
		k = (be + 127); //izraèunamo karakteristiku
		karakteristika = dec_to_bin(k);  //pretvorimo je u "binarni" broj
		rbroj = rbroj - 1; //za izraèunavanje mantise oduzimamo 1 kako bi ostale decimale
		mantisa(rbroj, ie1); //izraèunamo mantisu
	}
	else  if ((rbroj > 1) && (rbroj < 2)) { //sluèaj kada je broj veæi od 1 i manji od 2
		be = 0;
		k = (be + 127); //karakteristika je 127
		karakteristika = dec_to_bin(k);
		rbroj = rbroj - 1;
		mantisa(rbroj, ie1);

	}
	ie1[31] = p; //u polju ie1 æe bit broj zapisan u IEEE741 obliku. ie1[31] je predznak
	for (int i = 23; i < 31; i++) {	// bitovi od 23 do 31 su karakteristika. 
		*(ie1 + i) = (karakteristika % 10) + 48; //jer je karakteristika u binarnom obliku (zapravo u dekadskom)
		karakteristika = karakteristika / 10; //znamenku pretvaramo u char tako da joj dodamo 48.
	}


	return '0';
}


char ieee754_dvostruko(float rbroj, char* ie2) {
	char p, chk;
	float temp;
	int be = 0;
	long long k = 0, karakteristika = 0;

	if (rbroj < 0) { //najprije postavljamo apsolutnu vrijednost.
		rbroj = rbroj * (-1);	//ako je broj bio negativan u varijablu p postavimo 1, ako je bio pozitivina postavimo 0
		p = '1';
	}
	else {
		p = '0';
	}

	temp = rbroj;
	if (rbroj > 2) { //ako je apsolutna vrijednost veæa od 2 imamo slijedeæi postupak
		do
		{
			be++;			//broj dijelimo s dva dok rezultat ne bude manji od 2, i brojimo koliko smo puta dijelili
			temp = temp / 2;  //to je "be"

		} while (temp >= 2);
		rbroj = rbroj / pow(2, be);//broj dijelimo s 2^be
		k = be + 1023; //karakteristika je be+1023
		karakteristika = dec_to_bin_dv(k); //preraèunavamo karakteristiku iz dekadskog u binarni

		rbroj = rbroj - 1; //oduzimamo 1 kako bi ostala vrijednost desno od zareza (decimale)
		mantisa_dv(rbroj, ie2);//izraèunavamo mantisu
	}
	else if ((rbroj < 1) && (rbroj > 0)) { //ako je broj manji od 1 i veæi od 0 ide malo drugaèiji postupak
		be = 0;
		do
		{
			be++;
			rbroj = rbroj * 2;

		} while (rbroj < 1); //množimo s dva dok broj ne bude veæi od 1
		be = be * (-1); //be mora biti negativan
		k = (be + 1023); //izraèunamo karakteristiku
		karakteristika = dec_to_bin_dv(k);  //pretvorimo je u "binarni" broj
		rbroj = rbroj - 1; //za izraèunavanje mantise oduzimamo 1 kako bi ostale decimale
		mantisa_dv(rbroj, ie2); //izraèunamo mantisu
	}
	else  if ((rbroj > 1) && (rbroj < 2)) { //sluèaj kada je broj veæi od 1 i manji od 2
		be = 0;
		k = (be + 1023); //karakteristika je 127
		karakteristika = dec_to_bin_dv(k);
		rbroj = rbroj - 1;
		mantisa_dv(rbroj, ie2);

	}
	ie2[63] = p; //u polju ie2 æe bit broj zapisan u IEEE741 obliku. ie2[63] je predznak
	for (int i = 52; i < 63; i++) {	// bitovi od 63 do 52 su karakteristika. Pisemo ih unatrag 
		*(ie2 + i) = (karakteristika % 10) + 48; //jer je karakteristika u binarnom obliku (zapravo u dekadskom)
		karakteristika = karakteristika / 10; //znamenku pretvaramo u char tako da joj dodamo 48.
	}


	return '0';
}



void mantisa_dv(float rbroj, char* ie2) {//raèunanje mantise 
	for (int i = 51; i > -1; i--) {
		rbroj = rbroj * 2;
		rbroj = ((int)(rbroj * 100 + .5) / 100.0);
		if (rbroj >= 1) {
			*(ie2 + i) = '1';
			rbroj = rbroj - 1;
		}
		else {
			*(ie2 + i) = '0';
		}

	}
}

void mantisa(float rbroj, char* ie1) {//raèunanje mantise 
	for (int i = 22; i >= 0; i--) {
		rbroj = rbroj * 2;
		if (rbroj >= 1) {
			*(ie1 + i) = '1';
			rbroj = rbroj - 1;
		}
		else {
			*(ie1 + i) = '0';
		}

	}
}

void aniz(float a1, int n, float d) {
	float clan;
	FILE* fp;
	
	
	fp = fopen("aritmeticki.txt", "w");
	if (fp == NULL) {
		perror("kreiranje datoteke aritmeticki.txt");
		exit(EXIT_FAILURE);

	}
	printf("1. clan=%f\n", a1);
	fprintf(fp, "1. clan=%f\n", a1);
	for (int i = 1; i <n; i++) {
		clan = a1 + i  * d;
		printf("%d. clan=%f\n", i+1, clan);
		fprintf(fp, "%d. clan=%f\n", i + 1, clan);

		
	}
	fclose(fp);
}

void gniz(float a1, int n, float q) {
	float clan;

	FILE* fp;

	fp = fopen("geometrijski.txt", "w");
	if (fp == NULL) {
		perror("kreiranje datoteke geometrijski.txt");
		exit(EXIT_FAILURE);

	}

	//printf("1. clan=%f\n", a1);
	//fprintf(fp, "1. clan=%f\n", a1);

	for (int i = 1; i <= n; i++) {
		clan = a1 * pow(q, (i - 1));
		printf("%d. clan=%f\n", i, clan);
		fprintf(fp, "%d. clan=%f\n", i , clan);
	}
	fclose(fp);
}



