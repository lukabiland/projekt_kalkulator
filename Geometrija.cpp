#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "Header.h"

void geometrija(void) {
	int izbornik;
	float a, p, o, d, b, c,opseg_kv,povrsina_kv,dijagonala_kv, opseg_pr, povrsina_pr, dijagonala_pr;
	float oplosje_kvadr, obujam_kvadr, dijagonala_kvadr,oplosje_koc,volumen_koc,plosna_dijagonala_koc, prostorna_dijagonala_koc;
	printf("Odaberite operaciju:\n");
	printf("1 Kvadrat\n2 Pravokutnik\n3 Kvadar\n4 Kocka\n");
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
		povrsina_pr = povrsina_pravokutnika(a,b);
		dijagonala_pr = dijagonala_pravokutnika(a,b);

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
	}
}