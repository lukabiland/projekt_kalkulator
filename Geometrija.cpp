#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "Header.h"

void geometrija(void) {
	int izbornik;
	float a, p, o, d, b, c, r, h, s, opseg_kv, povrsina_kv, dijagonala_kv, opseg_pr, povrsina_pr, dijagonala_pr;
	float oplosje_kvadr, obujam_kvadr, dijagonala_kvadr, oplosje_koc, volumen_koc, plosna_dijagonala_koc, prostorna_dijagonala_koc;
	float obujam_stos, oplosje_stos, obujam_valj, oplosje_valj, obujam_kugl, oplosje_kugl, tr, opseg_tr,povrsina_tr;
	printf("Odaberite operaciju:\n");
	printf("1 Kvadrat\n2 Pravokutnik\n3 Kvadar\n4 Kocka\n5 Trokut\n6 Stozac\n7 Valjak\n8 Kugla\n9 Izlaz\n");
	scanf("%d", &izbornik);
	switch (izbornik) {
	case 1:
		printf("Unesite stranicu:");
		scanf("%f", &a);
		/*p = a * a;
		o = 4 * a;
		d = a * sqrt(2);*/
		opseg_kv = opseg_kvadrata(a);
		povrsina_kv = povrsina_kvadrata(a);
		dijagonala_kv = dijagonala_kvadrata(a);

		printf("Opseg kvadrata je:%f\n", opseg_kv);
		printf("Povrsina kvadrata je:%f\n", povrsina_kv);
		printf("Dijagonala kvadrata je:%f\n", dijagonala_kv);

		printf("");

		geometrija();
		break;

	case 2:
		printf("Unesite stranicu:");
		scanf("%f", &a);
		printf("Unesite stranicu:");
		scanf("%f", &b);
		/*p = a * a;
		o = 4 * a;
		d = a * sqrt(2);*/
		opseg_pr = opseg_pravokutnika(a, b);
		povrsina_pr = povrsina_pravokutnika(a, b);
		dijagonala_pr = dijagonala_pravokutnika(a, b);

		printf("Opseg pravokutnika je:%f\n", opseg_pr);
		printf("Povrsina pravokutnika je:%f\n", povrsina_pr);
		printf("Dijagonala pravokutnika je:%f\n", dijagonala_pr);
		geometrija();
		break;

	case 3:
		printf("Unesite stranicu:");
		scanf("%f", &a);
		printf("Unesite stranicu:");
		scanf("%f", &b);
		printf("Unesite stranicu:");
		scanf("%f", &c);
		/*p = a * a;
		o = 4 * a;
		d = a * sqrt(2);*/
		oplosje_kvadr = oplosje_kvadra(a, b, c);
		obujam_kvadr = obujam_kvadra(a, b, c);
		dijagonala_kvadr = dijagonala_kvadra(a, b, c);

		printf("Oplosje kvadra je:%f\n", oplosje_kvadr);
		printf("Obujam kvadra je:%f\n", obujam_kvadr);
		printf("Dijagonala kvadra je:%f\n", dijagonala_kvadr);
		geometrija();
		break;

	case 4:
		printf("Unesite stranicu:");
		scanf("%f", &a);
		/*p = a * a;
		o = 4 * a;
		d = a * sqrt(2);*/
		oplosje_koc = oplosje_kocke(a);
		volumen_koc = obujam_kocke(a);
		plosna_dijagonala_koc = plosna_dijagonala_kocke(a);
		prostorna_dijagonala_koc = prostorna_dijagonala_kocke(a);

		printf("Oplosje kocke je:%f\n", oplosje_koc);
		printf("Volumen kocke je:%f\n", volumen_koc);
		printf("Plosna dijagonala kocke je:%f\n", plosna_dijagonala_koc);
		printf("Prostorna dijagonala kocke je:%f\n", prostorna_dijagonala_koc);
		geometrija();
		break;

	case 5:

		printf("Unesi a stranicu trokuta\n");
		scanf(" %f", &a);
		printf("Unesi b stranicu trokuta\n");
		scanf(" %f", &b);
		printf("Unesi c stranicu trokuta\n");
		scanf(" %f", &c);
		tr = trokut(a, b, c); //pozivamo funkciju koja provjerava je li moguc i kakav je trokut.
		opseg_tr = opseg_trokuta(a, b, c);
		s = (1 / 2.) * (a + b + c);
		povrsina_tr = povrsina_trokuta(a, b, c, s);
		if (tr == 0) {
			printf("Ne postoji trokut s tim stranicama\n");
		}
		if (tr == 1) {
			printf("Trokut je jednakostranican\n");
			printf("Opseg jednakostranicnog trokuta je:%f\n", opseg_tr);
			printf("Povrsina jednakostranicnog trokuta je:%f\n", povrsina_tr);
		}
		if (tr == 2) {
			printf("Trokut je jednakokracan\n");
			printf("Opseg jednakokracnog trokuta je:%f\n", opseg_tr);
			printf("Povrsina jednakokracnog trokuta je:%f\n", povrsina_tr);
			}
				if (tr == 3) {
					printf("Trokut je raznostranican\n");
					printf("Opseg raznostranicnog trokuta je:%f\n", opseg_tr);
					printf("Povrsina raznostranicnog trokuta je:%f\n", povrsina_tr);
				}
			geometrija();
			break;

	case 6:
		printf("Unesite polumjer:");
		scanf("%f", &r);
		printf("Unesite visinu:");
		scanf("%f", &h);
		printf("Unesite izvodnicu:");
		scanf("%f", &s);

		obujam_stos = obujam_stosca(r, h);
		oplosje_stos = oplosje_stosca(r, s);

		printf("Obujam stosca je:%f\n", obujam_stos);
		printf("Oplosje stosca je:%f\n", oplosje_stos);

		geometrija();
		break;

	case 7:
		printf("Unesite polumjer:");
		scanf("%f", &r);
		printf("Unesite visinu:");
		scanf("%f", &h);

		obujam_valj = obujam_valjka(r, h);
		oplosje_valj = oplosje_valjka(r, h);

		printf("Obujam valjka je:%f\n", obujam_valj);
		printf("Oplosje valjka je:%f\n", oplosje_valj);

		geometrija();
		break;

	case 8:
		printf("Unesite polumjer:");
		scanf("%f", &r);

		obujam_kugl = obujam_kugle(r);
		oplosje_kugl = oplosje_kugle(r);

		printf("Obujam kugle je:%f\n", obujam_kugl);
		printf("Oplosje kugle je:%f\n", oplosje_kugl);

		geometrija();
		break;

	case 9:
		return ;
		break;

		}
	}
