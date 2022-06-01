#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "Header.h"

int programerski(void) {
	int a, b, c, izbornik, rez, pos = 1, dec, bin = 0, okt = 0, hex = 0, decc = 0, i = 0, rem, len;
	long long binn, hexi[17];
	//long int binar,j=1,remi,hexa=0;
	float rezultat, pi = 3.14, rad;
	printf("Odaberite operaciju:\n");
	printf("1 Zbrajanje\n2 Oduzimanje\n3 Mnozenje\n4 Dijeljenje\n5 Dek u bin\n6 Dek u okt\n7 Dek u hex\n8 Bin u dek\n9 Bin u okt\n");
	printf("10 Bin u hex\n11 Hex u dek\n12 Hex u bin\n13 Hex u okt\n14 Okt u dek\n15 Okt u bin\n16 Okt u hex\n");
	printf("17 Sklop I\n18 Sklop ILI\n19 Sklop NE\n20 Sklop NI\n21 Sklop NILI\n22 Sklop iskljucivo ILI\n23 IEEE 754 jednostruka preciznost\n");
	printf("24 IEEE 754 dvostruka preciznost\n25 Izlaz\n");
	scanf("%d", &izbornik);
	float real_broj;
	char* ie1 = NULL;
	ie1 = (char*)calloc(32, sizeof(char)); //rezerviramo polje za 32 podatka tipa char u koje æemo smjestiti
	if (ie1 == NULL) {						//rezultat
		return -1;
	}

	char* ie2 = NULL;
	ie2 = (char*)calloc(64, sizeof(char)); //rezerviramo polje za 64 podatka tipa char u koje æemo smjestiti
	if (ie2 == NULL) {						//rezultat
		return -1;
	}
	switch (izbornik) {
	case 1:

		printf("Unesite dva broja koja zelite zbrojiti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = zbrajanje(a, b);
		printf("%f+%f=%f\n", a, b, rezultat);
		programerski();
		break;

	case 2:
		printf("Unesite dva broja koja zelite oduzeti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = oduzimanje(a, b);
		printf("%f-%f=%f\n", a, b, rezultat);
		programerski();
		break;
	case 3:
		printf("Unesite dva broja koja zelite pomnoziti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = mnozenje(a, b);
		printf("%fx%f=%f\n", a, b, rezultat);
		programerski();
		break;
	case 4:
		printf("Unesite dva broja koja zelite podijeliti:");
		scanf("%f", &a);
		scanf("%f", &b);
		rezultat = dijeljenje(a, b);
		printf("%f:%f=%f\n", a, b, rezultat);
		programerski();
		break;

	case 5:
		//int bin = 0;

		printf("Unesite broj:");
		scanf("%d", &dec);

		printf("\n");
		/*do {
			bin = bin+(dec%2)*pos;
			dec = dec / 2;
			pos *= 10;
		} while (dec>0);*/

		bin = dec_to_bin(dec);

		printf("Dek u bin:%d\n\n", bin);
		programerski();
		break;

	case 6:
		//int okt = 0;

		printf("Unesite broj:");
		scanf("%d", &dec);


		/*do {
			okt = okt + (dec % 8) * pos;
			dec = dec / 8;
			pos *= 10;
		} while (dec > 0);*/

		okt = dec_to_oct(dec);

		printf("Dek u okt:%d\n\n", okt);
		programerski();
		break;

	case 7:
		//int okt = 0;

		printf("Unesite broj:");
		scanf("%d", &dec);


		/*do {
			hex = hex + (dec % 16) * pos;
			dec = dec / 16;
			pos *= 10;
		} while (dec > 0);*/

		hex = dec_to_hex(dec);

		printf("Dek u hex:%d\n", hex);
		programerski();
		break;

	case 8:
		//int okt = 0;

		printf("Unesite broj:");
		scanf("%lld", &binn);


		/*do {
			rem = binn % 10;
			binn /= 10;
			decc += rem * pow(2, i);
			i++;
		} while (binn != 0);*/

		decc = bin_to_dec(binn);

		printf("Bin u dek:%d\n", decc);
		programerski();
		break;

	case 9:
		//int okt = 0;
		i = 0, okt = 0;

		printf("Unesite broj:");
		scanf("%lld", &binn);

		/*do {
			decc += (binn % 10) * pow(2, i);
			i++;
			binn /= 10;
		} while (binn != 0);
		i = 1;
		do {
			okt += (decc%8) * i;
			decc /= 8;
			i *= 10;
		} while (decc != 0);*/

		okt = bin_to_oct(binn);

		printf("Bin u okt:%d\n", okt);
		programerski();
		break;

	case 10:

		//i = 1;

		printf("Unesite broj:");
		scanf("%lld", &binn);

		/*do {
			rem = binn % 10;
			hex = hex + rem * i;
			i = i * 2;
			binn = binn / 10;
		} while (binn!=0);*/
		hex = bin_to_hex(binn);

		printf("Bin u hex:%1X\n", hex);
		programerski();
		break;

	case 11:


		int duzina, test;
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

	case 12:


		//int duzina, test;
		//long long	dekadski;
		//char hbroj[17];
		//char* ptr;
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



	case 13:


		//int duzina, test;
		//long long	dekadski;
		//char hbroj[17];
		//char* ptr;
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

	case 14:
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
		hex = dec_to_hex(od);
		printf("Heksadekadska vrijednost broja %d iznosi %1X\n", n, hex);
		programerski();
		break;

	case 17:

		printf("Unesite prvi broj - dekadski:");
		scanf("%d", &a);




		printf("Unesite drugi broj dekadski:");
		scanf("%d", &b);


		c = a & b;

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 18:

		printf("Unesite prvi broj:");
		scanf("%d", &a);




		printf("Unesite drugi broj:");
		scanf("%d", &b);


		c = a | b;

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 19:

		printf("Unesite dekadski broj:");
		scanf("%d", &a);

		c = ~a;

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 20:

		printf("Unesite prvi broj - dekadski:");
		scanf("%d", &a);




		printf("Unesite drugi broj - dekadski:");
		scanf("%d", &b);


		c = ~(a & b);

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 21:

		printf("Unesite prvi broj - dekadski:");
		scanf("%d", &a);




		printf("Unesite drugi broj dekadski:");
		scanf("%d", &b);


		c = ~(a | b);

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

	case 22:

		printf("Unesite prvi broj:");
		scanf("%d", &a);


		printf("Unesite drugi broj:");
		scanf("%d", &b);


		c = a ^ b;

		printf("Vrijednost:%d\n\n", c);

		programerski();
		break;

		/*case 23:

				printf("Unesite prvi broj:");
				scanf("%d", &a);


				printf("Unesite drugi broj:");
				scanf("%d", &b);

			c =~(a ^ b);

			printf("Vrijednost:%d\n\n", c);

			programerski();
			break;*/

	case 23:
		printf("unesite realan broj koji zelite napisati u IEEE754 obliku s jednostrukom preciznoscu\n");
		scanf("%f", &real_broj);
		ieee754_jednostruko(real_broj, ie1); //pozovemo funkciju koja æe napraviti konverziju
		printf("IEEE754 glasi: %c ", ie1[31]);//u ie1[0] je predznak broja 1 - minus 0 plus
		for (int i = 30; i > 22; i--) { //slijedecih 8 bitova je karakteristika
			printf("%c", *(ie1 + i));
		}
		printf(" ");
		for (int i = 22; i > -1; i--) { //ostalih 23 bita je mantisa
			printf("%c", *(ie1 + i));
		}
		free(ie1);
		programerski();
		break;
	case 24:
		float real_broj_d;

		printf("unesite realan broj koji zelite napisati u IEEE754 obliku s dvostrukom preciznoscu\n");
		scanf("%f", &real_broj_d);
		ieee754_dvostruko(real_broj_d, ie2); //pozovemo funkciju koja æe napraviti konverziju
		printf("IEEE754 glasi: %c ", ie2[63]);//u ie2[63] je predznak broja 1 - minus 0 plus
		for (int i = 62; i > 51; i--) { //slijedecih 11 bitova je karakteristika
			printf("%c", *(ie2 + i));
		}
		printf(" ");
		for (int i = 51; i > -1; i--) { //ostalih 23 bita je mantisa
			printf("%c", *(ie2 + i));
		}
		printf("\n");
		free(ie2);
		programerski();
		break;

	case 25:
		return -1;
		break;

	}

}