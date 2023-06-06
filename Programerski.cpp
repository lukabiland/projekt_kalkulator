#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "Header.h"

int programerski(void) {
	int zb = 0, cf = 0, dekad1;
	int cnt = 0;
	int okz = 0;
	int oktar[6];
	int bin1[16];
	int a, b, c, izbornik, rez, pos = 1, dec, bin = 0, okt = 0, hex = 0, decc = 0, i = 0, rem, len;
	int* niz_brojeva = NULL;
	int min;
	long long binn, hexi[17];
	//long int binar,j=1,remi,hexa=0;
	float rezultat, pi = 3.14, rad;
	printf("Odaberite operaciju:\n");
	printf("1 Zbrajanje\n2 Oduzimanje\n3 Mnozenje\n4 Dijeljenje\n5 Dek u bin\n6 Dek u okt\n7 Dek u hex\n8 Bin u dek\n9 Bin u okt\n");
	printf("10 Bin u hex\n11 Hex u dek\n12 Hex u bin\n13 Hex u okt\n14 Okt u dek\n15 Okt u bin\n16 Okt u hex\n");
	printf("17 Sklop I\n18 Sklop ILI\n19 Sklop NE\n20 Sklop NI\n21 Sklop NILI\n22 Sklop iskljucivo ILI\n23 IEEE 754 jednostruka preciznost\n24 Pseudo-slucajni brojevi\n25 Izlaz\n");
	scanf("%d", &izbornik);
	float real_broj;
	char* ie1 = NULL;
	ie1 = (char*)calloc(32, sizeof(char)); //rezerviramo polje za 32 podatka tipa char u koje cemo smjestiti
	if (ie1 == NULL) {						//rezultat
		return -1;
	}
	char* ie2 = NULL;
	ie2 = (char*)calloc(64, sizeof(char)); //rezerviramo polje za 64 podatka tipa char u koje cemo smjestiti
	if (ie2 == NULL) {						//rezultat
		return -1;
	}

	switch (izbornik) {
	case 1:
		float aa, bb;
		printf("Unesite dva broja koja zelite zbrojiti:");//zbrajanje
		scanf("%f", &aa);
		scanf("%f", &bb);
		rezultat = zbrajanje(aa, bb);
		printf("%f+%f=%f\n", aa, bb, rezultat);
		programerski();
		break;

	case 2:

		printf("Unesite dva broja koja zelite oduzeti:");//oduzimanje
		scanf("%f", &aa);
		scanf("%f", &bb);
		rezultat = oduzimanje(aa, bb);
		printf("%f-%f=%f\n", aa, bb, rezultat);
		programerski();
		break;
	case 3:
		printf("Unesite dva broja koja zelite pomnoziti:");//množenje
		scanf("%f", &aa);
		scanf("%f", &bb);
		rezultat = mnozenje(aa, bb);
		printf("%fx%f=%f\n", aa, bb, rezultat);
		programerski();
		break;
	case 4:
		printf("Unesite dva broja koja zelite podijeliti:");//dijeljenje
		scanf("%f", &aa);
		scanf("%f", &bb);
		rezultat = dijeljenje(aa, bb);
		printf("%f:%f=%f\n", aa, bb, rezultat);
		programerski();
		break;


	case 5:
		do {
			printf("Unesite dekadski broj koji želite pretvoriti u binarni:");//pretvaranje dekadskog broja u binarni
			scanf("%d", &dec);

		} while (dec < (-32516) || dec>32516); //granice unošenja


		printf("\n");
		int* point;
		point = dec_to_bin_ar(dec);  //vraæamo pokazivaè na niz
		for (int i = 15; i >= 0; i--) {
			printf("%d", point[i]);
		}
		printf("\n");
		delete[] point;  //oslobaðamo mameoriju
		programerski();
		break;

	case 6:
		do {
			printf("Unesite dekadski broj:");  //pretvaranje dekadskog broja u oktalni s predznakom
			scanf("%d", &dec);
		} while (dec < (-32516) || dec>32516);
		printf("\n");  //najprije dekadski pretvorimo u binarni
		point = dec_to_bin_ar(dec);  //vraæamo pokazivaè na niz u kojem su binarni brojevi
		int oktar[6];  //polje u koje æemo smjestiti oktalni broj
		zb = 0;
		cnt = 0;
		okz = 0;
		for (int i = 0; i < 16; i++) {
			if (((i % 3) != 0) || (i == 0)) {  //odvajamo po 3 binarne znamenke  od kojih pravimo jednu oktalnu
				cf = pow(2, cnt);			//preskaèemo ako je i==0
				zb = zb + (point[i] * cf);
				cnt++;				//brojaè do 3
			}
			else {
				oktar[okz] = zb;  //kada su prošle tri znamenke spremamo u polje oktar oktalnu znamenku
				okz++;
				zb = 0;
				cnt = 0;
				int cf = pow(2, cnt);
				zb = zb + point[i] * cf;
				cnt++;
			}
		}
		oktar[okz] = zb;  //na kraju spremimo ostatak;
		printf("Oktalni broj je:");
		for (int i = 5; i >= 0; i--) {
			printf("%d", oktar[i]);
		}
		printf("\n");
		programerski();
		break;


	case 7:
		do {
			printf("Unesite dekadski broj:");  //pretvaranje dekadskog broja u heksadekadski s predznakom
			scanf("%d", &dec);
		} while (dec < (-32516) || dec>32516);
		printf("\n");  //najprije dekadski pretvorimo u binarni
		point = dec_to_bin_ar(dec);  //vraæamo pokazivaè na niz u kojem su binarni brojevi
		char hexar[4];  //polje u koje æemo smjestiti heksadekadski broj
		zb = 0;
		cnt = 0;
		okz = 0;
		for (int i = 0; i < 16; i++) {
			if (((i % 4) != 0) || (i == 0)) {  //odvajamo po 3 binarne znamenke  od kojih pravimo jednu oktalnu
				cf = pow(2, cnt);			//preskaèemo ako je i==0
				zb = zb + (point[i] * cf);
				cnt++;				//brojaè do 3
			}
			else {
				if (zb > 9) zb = zb + 55;
				else zb = zb + 48;
				hexar[okz] = zb;  //kada su prošle tri znamenke spremamo u polje oktar oktalnu znamenku
				okz++;
				zb = 0;
				cnt = 0;
				int cf = pow(2, cnt);
				zb = zb + point[i] * cf;
				cnt++;
			}
		}
		if (zb > 9) zb = zb + 55;
		else zb = zb + 48;
		hexar[okz] = zb;  //na kraju spremimo ostatak;
		printf("Heksa dekadsk broj je:");
		for (int i = 3; i >= 0; i--) {
			printf("%c", hexar[i]);
		}
		printf("\n");
		programerski();
		break;



	case 8:

		printf("Unesite binarni broj do 16 znamenki:"); //pretvaranje binarnog u dekadski bez predznaka
		scanf("%lld", &binn);
		decc = bin_to_dec(binn);

		printf("Bin u dek:%d\n", decc);
		programerski();
		break;

	case 9:
		//int okt = 0;
		i = 0, okt = 0;

		printf("Unesite binarni broj:"); //pretvaranje iz binarnog u oktalni bez predznaka
		scanf("%lld", &binn);


		okt = bin_to_oct(binn);

		printf("Bin u okt:%d\n", okt);
		programerski();
		break;

	case 10:


		printf("Unesite binarni broj:"); //pretvaranje iz binarnog u heksadekadski bez predznaka
		scanf("%lld", &binn);
		hex = bin_to_hex(binn);

		printf("Bin u hex:%1X\n", hex);
		programerski();
		break;

	case 11:
		int duzina, test;  //pretvaranje heksadekadskog broja u dekadski
		long long	dekadski;
		char hbroj[17];
		char* ptr;
		do
		{
			printf("unesite heksadekadski broj\n");
			scanf(" %s", &hbroj);
			duzina = strlen(hbroj);
			ptr = (char*)calloc(duzina, sizeof(char));

			for (int i = 0; i < duzina; i++) {
				ptr[i] = hbroj[i];

				test = hex_znam(ptr[i]);
				if (test == -1) {
					break;
				}
			}

		} while (test == -1);


		dekadski = hex_to_dec(ptr, duzina);
		printf("Dekadska vrijednost broja %s iznosi %lld\n", hbroj, dekadski);
		programerski();
		break;

	case 12:  //pretvaranje heksadekadskog broj u binarni bez predznaka

		do
		{
			printf("unesite heksadekadski broj\n");
			scanf(" %s", &hbroj);
			duzina = strlen(hbroj);
			ptr = (char*)calloc(duzina, sizeof(char));

			for (int i = 0; i < duzina; i++) {
				ptr[i] = hbroj[i];

				test = hex_znam(ptr[i]);
				if (test == -1) {
					break;
				}
			}

		} while (test == -1);


		dekadski = hex_to_dec(ptr, duzina);


		bin = dec_to_bin(dekadski);
		printf("Binarna vrijednost broja %s iznosi %d\n", hbroj, bin);
		programerski();
		break;



	case 13:  //heksadekaski u oktalni
		do
		{
			printf("unesite heksadekadski broj\n");
			scanf(" %s", &hbroj);
			duzina = strlen(hbroj);
			ptr = (char*)calloc(duzina, sizeof(char));

			for (int i = 0; i < duzina; i++) {
				ptr[i] = hbroj[i];

				test = hex_znam(ptr[i]);
				if (test == -1) {
					break;
				}
			}

		} while (test == -1);


		dekadski = hex_to_dec(ptr, duzina);


		okt = dec_to_oct(dekadski);
		printf("Oktalna vrijednost broja %s iznosi %d\n", hbroj, okt);
		programerski();
		break;

	case 14:    //oktalni u dekadski
		int n, k, od;
		int z, znam;
		do {
			printf("Unesite oktalni broj:");
			scanf("%d", &n);
			z = n;
			do {
				znam = z % 10;
				z = z / 10;
				if (znam > 7) {
					z = 0;
				}

			} while (z > 0);
		} while (znam > 7);
		od = oct_to_dec(n);
		printf("Dekadska vrijednost broja %d iznosi %d\n", n, od);
		programerski();
		break;

	case 15:
		do {
			printf("Unesite oktalni broj:"); //oktalni u binarni
			scanf("%d", &n);
			z = n;
			do {
				znam = z % 10;
				z = z / 10;
				if (znam > 7) {
					z = 0;
				}

			} while (z > 0);
		} while (znam > 7);
		od = oct_to_dec(n);
		bin = dec_to_bin(od);
		printf("Binarna vrijednost broja %d iznosi %d\n", n, bin);
		programerski();
		break;

	case 16:
		/*int n, k, od;
		int z, znam;*/
		do {
			printf("Unesite oktalni broj:");
			scanf("%d", &n);
			z = n;
			do {
				znam = z % 10;
				z = z / 10;
				if (znam > 7) {
					z = 0;
				}

			} while (z > 0);
		} while (znam > 7);
		od = oct_to_dec(n);

		//printf("Heksadekadska vrijednost broja %d iznosi\n", n);
		dec_to_hex(od);
		printf("\n");

		programerski();
		break;

	case 17:  //operacija logièko "i" (and)

		printf("Unesite prvi broj - dekadski:");
		scanf("%d", &a);




		printf("Unesite drugi broj dekadski:");
		scanf("%d", &b);


		c = a & b;

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 18:  //logièko "ili " (|)

		printf("Unesite prvi broj:");
		scanf("%d", &a);




		printf("Unesite drugi broj:");
		scanf("%d", &b);


		c = a | b;

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 19:  //logièko "ne"

		printf("Unesite dekadski broj:");
		scanf("%d", &a);

		c = ~a;

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 20://logièko NI

		printf("Unesite prvi broj - dekadski:");
		scanf("%d", &a);




		printf("Unesite drugi broj - dekadski:");
		scanf("%d", &b);


		c = ~(a & b);

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 21: //logièko "nili"

		printf("Unesite prvi broj - dekadski:");
		scanf("%d", &a);




		printf("Unesite drugi broj dekadski:");
		scanf("%d", &b);


		c = ~(a | b);

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 22: //logièko iskljuèivo ili (xor)

		printf("Unesite prvi broj:");
		scanf("%d", &a);


		printf("Unesite drugi broj:");
		scanf("%d", &b);


		c = a ^ b;

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;



	case 23:
		printf("unesite realan broj koji zelite napisati u IEEE754 obliku s jednostrukom preciznoscu\n");
		scanf("%f", &real_broj);
		ieee754_jednostruko(real_broj, ie1); //pozovemo funkciju koja ce napraviti konverziju
		printf("IEEE754 glasi: %c ", ie1[31]);//u ie1[0] je predznak broja 1 - minus 0 plus
		for (int i = 30; i > 22; i--) { //slijedecih 8 bitova je karakteristika
			printf("%c", *(ie1 + i));
		}
		printf(" ");
		for (int i = 22; i > -1; i--) { //ostalih 23 bita je mantisa
			printf("%c", *(ie1 + i));
		}
		printf("\n");
		free(ie1);
		programerski();
		break;

	case 24:
		printf("koliko pseudoslucajnih brojeva izmeðu 0 i 100 zelis kreirati u niz?"); //Pseudo-slucajni brojevi
		scanf("%d", &a);
		//int* niz_brojeva = NULL;
		niz_brojeva = (int*)calloc(a, sizeof(int));
		for (int i = 0; i < a; i++) {
			niz_brojeva[i] = rand() % 101;
		}
		printf("nesortirani niz izgleda ovako:");  //ispisujemo nesortirani niz
		for (int i = 0; i < a; i++) {
			printf("%d,", niz_brojeva[i]);
		}

		printf("\n");

		 min = -1;

		for (int i = 0; i < a - 1; i++)
		{
			min = i;
			for (int j = i + 1; j < a; j++)
			{
				if (niz_brojeva[j] < niz_brojeva[min]) {
					min = j;

				}
			}

			zamjena(&niz_brojeva[i], &niz_brojeva[min]);
		}


		printf("sortirani niz izgleda ovako:");

		for (int i = 0; i < a; i++) {
			printf("%d,", niz_brojeva[i]);


		}

		printf("\n");

		break;

	case 25:
		return -1;
		break;

	}

}