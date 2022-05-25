#ifndef HEADER_H
#define HEADER_H
#define const pi = 3.14159265359
/*typedef struct kalk{

}KALK;*/

typedef struct tocka {
	float x;
	float y;
}TOCKA;

void standardni(void);
float zbrajanje(float a, float b);
float oduzimanje(float a, float b);
float mnozenje(float a, float b);
float dijeljenje(float a, float b);
float postotak(float a, float b);
float drugi_korjen(float a);
void znanstveni(void);
float apsolutni(float a);
float mod(int a, int b);
int faktorijel(int n);
float x_na_y(int x, int y);
void programerski(void);
int dec_to_bin(long long dec);
int dec_to_oct(long long dec);
int dec_to_hex(long long dec);
int bin_to_dec(long long binn);
int bin_to_oct(long long binn);
int bin_to_hex(long long binn);
long long hex_to_dec(char* hexbroj, int duzina);
int hex_znam(char znam);
int oct_to_dec(int n);
void geometrija(void);
float opseg_kvadrata(float a);
float povrsina_kvadrata(float a);
float dijagonala_kvadrata(float a);
float opseg_pravokutnika(float a, float b);
float povrsina_pravokutnika(float a, float b);
float dijagonala_pravokutnika(float a, float b);
float oplosje_kvadra(float a, float b, float c);
float obujam_kvadra(float a, float b, float c);
float dijagonala_kvadra(float a, float b, float c);
float oplosje_kocke(float a);
float obujam_kocke(float a);
float plosna_dijagonala_kocke(float a);
float prostorna_dijagonala_kocke(float a);
int analiticka_geometrija();
int analiticka_geometrija();
void jednadzba_pravca(TOCKA* poknatocku);
float udaljenost_pravac_tocka(TOCKA* poknatocku, float k, float l);
float udaljenost_dvije_tocke(TOCKA*);

#endif // !1