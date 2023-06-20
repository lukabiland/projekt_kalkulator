#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "Header.h"
#define M_PI 3.14159265359

float zbrajanje(float a, float b) { //Zbrajanje brojeva, koje se još nalazi u tekstualnoj datoteci
	FILE* fp = NULL;
	fp = fopen("zbroj.txt", "w");

	float zbr = a + b;

	if (fp == NULL) {
		perror("Datoteka se ne moze kreirati.\n");
		exit(EXIT_FAILURE);
	}
	fprintf(fp, "%f+%f=%f\n", a, b, zbr);

	fclose(fp);

	//float zbr = a + b;

	return zbr;
}
float oduzimanje(float a, float b) {  //Oduzimanje brojeva, koje se još nalazi u tekstualnoj datoteci

	FILE* fp = NULL;
	fp = fopen("oduzimanje.txt", "w");

	float od = a - b;

	if (fp == NULL) {
		perror("Datoteka se ne moze kreirati.\n");
		exit(EXIT_FAILURE);
	}
	fprintf(fp, "%f-%f=%f\n", a, b, od);

	fclose(fp);

	return od;
}

float mnozenje(float a, float b) {   //Množenje brojeva, koje se još nalazi u tekstualnoj datoteci
	FILE* fp = NULL;
	fp = fopen("mnozenje.txt", "w");

	float mn = a * b;

	if (fp == NULL) {
		perror("Datoteka se ne moze kreirati.\n");
		exit(EXIT_FAILURE);
	}
	fprintf(fp, "%f*%f=%f\n", a, b, mn);

	fclose(fp);

	return mn;
}

float dijeljenje(float a, float b) {   //Dijeljenje brojeva, koje se još nalazi u tekstualnoj datoteci
	FILE* fp = NULL;
	fp = fopen("dijeljenje.txt", "w");

	float di = a / b;

	if (fp == NULL) {
		perror("Datoteka se ne moze kreirati.\n");
		exit(EXIT_FAILURE);
	}
	fprintf(fp, "%f/%f=%f\n", a, b, di);

	fclose(fp);

	return di;
}



/*void ispis_cetiri(const int polje[], const int n) {
	for (int i = 0; i < n; i++)
	{
		if (i == 0) {
			printf("polje[%d ", polje[i]);
		}
		else if (i > 0 && i < n - 1) {
			printf("%d ", polje[i]);
		}
		else {
			printf("%d]\n", polje[i]);
		}
	}
}

/*void zamjena(int* const veci, int* const manji) {
	int temp = 0;
	temp = *manji;
	*manji = *veci;
	*veci = temp;
}
void bubbleSort(int polje[], const int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (polje[j + 1] < polje[j]) {
				zamjena(&polje[j + 1], &polje[j]);
			}
		}
	}*/


float postotak(float a, float b) {  //na primjer 20 150 znaèi 20% od 150   rezultat=20*(1/100)*150 rezultat=30   1/100=0.01
	float posto = a * 0.01 * b;

	return posto;
}
float drugi_korjen(float a) {  //raèunanje drugog korjena
	float kor = sqrt(a);

	return kor;
}

float apsolutni(float a) { //ako je broj manji od nule množimo ga s -1
	if (a < 0) {
		a = a * (-1);
	}
	return a;
}

int mod(int a, int b) { //dijeljenje s ostatkom i vraæanje ostatka
	int mo = a % b;
	return mo;
}

long long faktorijel(int n) {
	if (n > 1) {
		return n * faktorijel(n - 1);
	}
	else {
		return 1;
	}
}

float x_na_y(int x, int y) {
	float rez = pow(x, y);
	return rez;
}

int dec_to_bin(long long dec) { //Dekadski u binarni
	int pos = 1, bin = 0;
	do {
		bin = bin + (dec % 2) * pos;
		dec = dec / 2;
		pos *= 10;
	} while (dec > 0);
	return bin;
}


int* dec_to_bin_ar(int dec) { //Dekadski u binarni
	int n = 0, i = 0;
	int* a = new int[16]; //postavljamo pokazivaè na niz od 16 podataka tipa int
	if (dec < 0)
	{
		dec = dec * (-1);   //ovo je postupak kada je dekadski broj negativan
		for (i = 0; i < 16; i++)
		{
			int s1 = dec % 2;  
			if (s1 == 0) a[i] = 1; //radimo prvi komplement (nule u jedinice, a jedinice u nule)
			else a[i] = 0;
			dec = dec / 2;

		}
		for (i = 0; i < 16; i++)
		{
			if (a[i] == 1) a[i] = 0;  //dodajemo 1 i dobivamo drugi komplement
			else {
				a[i] = 1;
				break;
			}
		}

	}
	else {
		for (i = 0; i < 16; i++)  //ako je dekadski broj pozitivan
		{
			int s1 = dec % 2;
			if (s1 == 0) a[i] = 0;
			else a[i] = 1;
			dec = dec / 2;

		}
	}



	return a;
}

int dec_to_oct(long long dec) { //Dekadski u oktalni
	int pos = 1, oct = 0;
	do {
		oct = oct + (dec % 8) * pos;
		dec = dec / 8;
		pos *= 10;
	} while (dec > 0);
	return oct;
}

void dec_to_hex(long long dec) {
	char arr[100];
	int pos = 1, hex = 0, i = 0;
	while (dec != 0) {
		int temp = 0;
		temp = dec % 16;
		if (temp < 10) {
			arr[i] = temp + 48;
			i++;
		}
		else {
			arr[i] = temp + 55;
			i++;
		}
		//hex = hex + (dec % 16) * pos;
		dec = dec / 16;
		//pos *= 10;
	}
	for (int j = i - 1; j >= 0; j--) {
		printf("%c", arr[j]);
	}
}

int provjera_01(long long br) {  //provjeravamo je li dekadski broj ispravan, odnosno ima li u broja
	for (int i = 0; i < 16; i++) {//znamenki veæih od 1
		int ost = br % 10;
		if (ost > 1) {
			return 2;
			break;
		}
		else {
			br = br / 10;
		}
	}
	return 1;

}
int bin_to_dec(long long binn) { //Binarni u dekadski
	int i = 0, decc = 0, rem;


	do {
		rem = binn % 10;
		binn /= 10;
		decc += rem * pow(2, i);
		i++;
	} while (binn != 0);
	return decc;
}
/*
int bin_to_decimal(int* binn) { //Binarni u dekadski
	int i = 0, decc = 0, rem;
	if (binn[0] == 1) {

		for (int i = 0; i < 16; i++) {
			if (binn[i] == 0) binn[i] = 1;
			else binn[i] = 0;
		}
		for (int i = 0; i < 16; i++) {
			if (binn[i] == 1) binn[i] = 0;
			else {
				binn[i] = 1;
				break;
			}
		}
	}
	int zbr = 0;
	for (int i = 0; i < 16; i++) {
		int df = pow(2, i);
		zbr = zbr + binn[i] * df;
	}
	//if (binn[15] == 1) zbr = zbr * (-1);
	return zbr;
}*/

int bin_to_oct(long long binn) { //Binarni u oktalni
	int i = 0, decc = 0, okt = 0;

	do {
		decc += (binn % 10) * pow(2, i);  //najprije pretvaramo binarni u dekadski
		i++;
		binn /= 10;
	} while (binn != 0);
	i = 1;
	do {
		okt += (decc % 8) * i; //pa dekadski u oktalni
		decc /= 8;
		i *= 10;
	} while (decc != 0);
	return okt;
}

int bin_to_hex(long long binn) { //Binarni u heksadekadski
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
	if ((znam > 47) && (znam < 58)) {		//Brojevi od 0 do 9
		return znam - 48;
	}
	else if ((znam > 64) && (znam < 71)) {	//Velika slova od A do F	
		return znam - 55;
	}
	else if ((znam > 96) && (znam < 103)) { //Mala slova od a do f
		return znam - 87;
	}
	else return -1;  //ukoliko nije dobar upis vraæamo -1 što znaèi greška u upisu
}
long long hex_to_dec(char* hexbroj, int duzina) { //Heksadekadski u dekadski
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
	return dekadski;  //vraæamo dekadsku vrijednost broja
}

int oct_to_dec(int n) {  //Oktalni u dekadski
	int p = 0, dec = 0, r;

	do {  
		r = n % 10;
		n = n / 10;
		dec = dec + r * pow(8, p);
		p++;
	} while (n > 0);
	return dec;
}

/*int sklop_I() {

	printf("Unesite ")
}*/

float opseg_kvadrata(float a) {
	float p, o, d;
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

float opseg_pravokutnika(float a, float b) {
	float p, o, d;
	o = 2 * (a + b);
	return o;
}

float povrsina_pravokutnika(float a, float b) {
	float p, o, d;
	p = a * b;
	return p;
}

float dijagonala_pravokutnika(float a, float b) {
	float p, o, d;
	d = sqrt((a * a) + (b * b));
	return d;
}

float oplosje_kvadra(float a, float b, float c) {
	float o, d, v;
	o = 2 * ((a * b) + (b * c) + (a * c));
	return o;
}

float obujam_kvadra(float a, float b, float c) {
	float o, d, v;
	v = a * b * c;
	return v;
}

float dijagonala_kvadra(float a, float b, float c) {
	float o, d, v;
	d = sqrt((a * a) + (b * b) + (c * c));
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
	plos_di = a * sqrt(2);
	return plos_di;
}

float prostorna_dijagonala_kocke(float a) {
	float o, prost_di, v;
	prost_di = a * sqrt(3);
	return prost_di;
}

float trokut(float a, float b, float c) {
	float x;
	if ((a + b < c || a + c < b || b + c < a)) { //Ovdje nema trokuta zbog nedovoljnog zbroja dviju stranica koje su manje od trece stranice
		x = 0;
	}
	else if (a == b && a != c) {  //Jednakokracan trokut, c nije jednako s a i b
		x = 2;
	}
	else if (a != c && a != b && c != b) {  //Raznostranican trokut
		x = 3;
	}
	else if (b == c && a != c) {   //Jednakokracan trokut, a nije jednako s b i c
		x = 2;
	}
	else if (a == c && b != c) {   //Jednakokracan trokut, b nije jednako s a i c
		x = 2;
	}
	else if (a == b && a == c) {   //Jednakostranican trokut
		x = 1;
	}
	return x;
}

float opseg_trokuta(float a, float b, float c) {
	float o, p;
	if (a == b && a != c) {      //Opseg trokuta za jednakokracan trokut
		o = (2 * a) + b;
	}
	else if (a != c && a != b && c != b) {   //Opseg trokuta za raznostranican trokut
		o = a + b + c;
	}
	else if (b == c && a != c) {	//Opseg trokuta za jednakokracan trokut
		o = (2 * a) + b;
	}
	else if (a == c && b != c) {	//Opseg trokuta za jednakokracan trokut
		o = (2 * a) + b;
	}
	else if (a == b && a == c) {    //Opseg trokuta za jednakostranican trokut
		o = 3 * a;
	}
	return o;
}

float povrsina_trokuta(float a, float b, float c, float s) {
	float o, p;
	//s =(1/2.)*(a + b + c);
	if (a == b && a != c) {			//Povrsina trokuta za jednakokracan trokut
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	else if (a != c && a != b && c != b) {		//Povrsina trokuta za raznostranican trokut
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	else if (b == c && a != c) {	//Povrsina trokuta za jednakokracan trokut
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	else if (a == c && b != c) {	//Povrsina trokuta za jednakokracan trokut
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	else if (a == b && a == c) {	//Povrsina trokuta za jednakostranican trokut
		p = sqrt(s * (s - a) * (s - b) * (s - c));
	}
	return p;
}

float udaljenost_dvije_tocke(TOCKA* poknatocku) {
	float udaljenost;
	udaljenost = sqrt(pow((((poknatocku + 1)->x) - (poknatocku->x)), 2) + pow((((poknatocku + 1)->y) - (poknatocku->y)), 2));
	return udaljenost;
}

float obujam_stosca(float r, float h) {
	float o, d, v;
	v = (1 / 3.) * (r * r) * M_PI * h;
	return v;

}

float oplosje_stosca(float r, float s) {
	float o, d, v;
	o = r * M_PI * (r + s);
	return o;
}


float obujam_valjka(float r, float h) {
	float o, d, v;
	v = (r * r) * M_PI * h;
	return v;

}

float oplosje_valjka(float r, float h) {
	float o, d, v;
	o = 2 * r * M_PI * (r + h);
	return o;
}

float obujam_kugle(float r) {
	float o, v;
	v = (4 / 3.) * (r * r * r) * M_PI;
	return v;

}

float oplosje_kugle(float r) {
	float o, v;
	o = 4 * (r * r) * M_PI;
	return o;
}

float udaljenost_pravac_tocka(TOCKA* poknatocku, float k, float l) {
	float udaljenost;
	//jednadzba za udaljenost pravca od ravnine glasi: d=|kx0+l-y0|/sqrt(k*k+1)
	float brojnik, nazivnik;
	brojnik = k * poknatocku->x + l - poknatocku->y;
	if (brojnik < 0) brojnik = brojnik * (-1);
	nazivnik = sqrt(k * k + 1);
	udaljenost = brojnik / nazivnik;
	return udaljenost;
}


void jednadzba_pravca(TOCKA* poknatocku) {
	//jednadzba pravca kroz dvije tocke glasi: y-y1=((y2-y1)/(x2-x1))*(x-x1)
	//izraz (y2-y1)/(x2-x1) cemo izracunati i oznaciti kao z, pa imamo z=(y2-y1)/(x2-x1)
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
	if (rbroj > 2) { //ako je apsolutna vrijednost veca od 2 imamo slijedeci postupak
		do
		{
			be++;			//broj dijelimo s dva dok rezultat ne bude manji od 2, i brojimo koliko smo puta dijelili
			temp = temp / 2;  //to je "be"

		} while (temp >= 2);
		rbroj = rbroj / pow(2, be);//broj dijelimo s 2^be
		k = be + 127; //karakteristika je be+127
		karakteristika = dec_to_bin(k); //preracunavamo karakteristiku iz dekadskog u binarni


		rbroj = rbroj - 1; //oduzimamo 1 kako bi ostala vrijednost desno od zareza (decimale)
		mantisa(rbroj, ie1);//izracunavamo mantisu
	}
	else if ((rbroj < 1) && (rbroj > 0)) { //ako je broj manji od 1 i veci od 0 ide malo drugaciji postupak
		be = 0;
		do
		{
			be++;
			rbroj = rbroj * 2;

		} while (rbroj < 1); //mnozimo s dva dok broj ne bude veci od 1
		be = be * (-1); //be mora biti negativan
		k = (be + 127); //izracunamo karakteristiku
		karakteristika = dec_to_bin(k);  //pretvorimo je u "binarni" broj
		rbroj = rbroj - 1; //za izracunavanje mantise oduzimamo 1 kako bi ostale decimale
		mantisa(rbroj, ie1); //izracunamo mantisu
	}
	else  if ((rbroj > 1) && (rbroj < 2)) { //slucaj kada je broj veæi od 1 i manji od 2
		be = 0;
		k = (be + 127); //karakteristika je 127
		karakteristika = dec_to_bin(k);
		rbroj = rbroj - 1;
		mantisa(rbroj, ie1);

	}
	ie1[31] = p; //u polju ie1 ce biti broj zapisan u IEEE741 obliku. ie1[31] je predznak
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
	if (rbroj > 2) { //ako je apsolutna vrijednost veæa od 2 imamo slijedeci postupak
		do
		{
			be++;			//broj dijelimo s dva dok rezultat ne bude manji od 2, i brojimo koliko smo puta dijelili
			temp = temp / 2;  //to je "be"

		} while (temp >= 2);
		rbroj = rbroj / pow(2, be);//broj dijelimo s 2^be
		k = be + 1023; //karakteristika je be+1023
		karakteristika = dec_to_bin_dv(k); //preracunavamo karakteristiku iz dekadskog u binarni

		rbroj = rbroj - 1; //oduzimamo 1 kako bi ostala vrijednost desno od zareza (decimale)
		mantisa_dv(rbroj, ie2);//izracunavamo mantisu
	}
	else if ((rbroj < 1) && (rbroj > 0)) { //ako je broj manji od 1 i veci od 0 ide malo drugaciji postupak
		be = 0;
		do
		{
			be++;
			rbroj = rbroj * 2;

		} while (rbroj < 1); //mnozimo s dva dok broj ne bude veci od 1
		be = be * (-1); //be mora biti negativan
		k = (be + 1023); //izracunamo karakteristiku
		karakteristika = dec_to_bin_dv(k);  //pretvorimo je u "binarni" broj
		rbroj = rbroj - 1; //za izracunavanje mantise oduzimamo 1 kako bi ostale decimale
		mantisa_dv(rbroj, ie2); //izracunamo mantisu
	}
	else  if ((rbroj > 1) && (rbroj < 2)) { //slucaj kada je broj veci od 1 i manji od 2
		be = 0;
		k = (be + 1023); //karakteristika je 127
		karakteristika = dec_to_bin_dv(k);
		rbroj = rbroj - 1;
		mantisa_dv(rbroj, ie2);

	}
	ie2[63] = p; //u polju ie2 ce bit broj zapisan u IEEE741 obliku. ie2[63] je predznak
	for (int i = 52; i < 63; i++) {	// bitovi od 63 do 52 su karakteristika. Pisemo ih unatrag 
		*(ie2 + i) = (karakteristika % 10) + 48; //jer je karakteristika u binarnom obliku (zapravo u dekadskom)
		karakteristika = karakteristika / 10; //znamenku pretvaramo u char tako da joj dodamo 48.
	}


	return '0';
}



void mantisa_dv(float rbroj, char* ie2) {//racunanje mantise 
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

void mantisa(float rbroj, char* ie1) {//racunanje mantise 
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

void aniz(float a1, int n, float d) {  //Aritmeticki niz
	float clan;
	FILE* fp;
	fp = fopen("aritmeticki.txt", "w");  //stvaramo datoteku "aritemtièki.txt" u  koju æemo spremiti niz
	if (fp == NULL) {
		perror("kreiranje datoteke aritmeticki.txt");
		exit(EXIT_FAILURE);

	}
	printf("1. clan=%f\n", a1);
	fprintf(fp, "1. clan=%f\n", a1);
	for (int i = 1; i < n; i++) {
		clan = a1 + i * d;           //raèunanje èlanova niza
		printf("%d. clan=%f\n", i + 1, clan);
		fprintf(fp, "%d. clan=%f\n", i + 1, clan);


	}
	fclose(fp);
}

void gniz(float a1, int n, float q) {  //Geometrijski niz
	float clan;

	FILE* fp;

	fp = fopen("geometrijski.txt", "w");
	if (fp == NULL) {
		perror("kreiranje datoteke geometrijski.txt");
		exit(EXIT_FAILURE);

	}

	for (int i = 1; i <= n; i++) {
		clan = a1 * pow(q, (i - 1));  //raèunanje èlanova geometrijskog niza
		printf("%d. clan=%f\n", i, clan);
		fprintf(fp, "%d. clan=%f\n", i, clan);
	}
	fclose(fp);
}

void zamjena(int* veci, int* manji) {  //Sortiranje brojeva od najmanjeg do najveceg
	int temp = 0;
	temp = *manji;
	*manji = *veci;
	*veci = temp;
}

