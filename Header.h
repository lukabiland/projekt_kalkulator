#ifndef HEADER_H
#define HEADER_H
#define const pi = 3.14159265359
/*typedef struct kalk{

}KALK;*/

typedef struct tocka {
	float x;
	float y;
}TOCKA;
int bin_to_decimal(int*);
long long dec_to_bin_dv(long long dec);
void mantisa_dv(float rbroj, char* ie2);
char ieee754_dvostruko(float rbroj, char*);
char ieee754_jednostruko(float rbroj, char*);
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
int programerski(void);

int* dec_to_bin_ar(int dec);

int dec_to_bin(long long dec);
int dec_to_oct(long long dec);
void dec_to_hex(long long dec);
int bin_to_dec(long long binn);
int bin_to_oct(long long binn);
int bin_to_hex(long long binn);
long long hex_to_dec(char* hexbroj, int duzina);
int hex_znam(char znam);
int oct_to_dec(int n);
void zamjena(int* veci, int* manji);
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
float trokut(float a, float b, float c);
float opseg_trokuta(float a, float b, float c);
float povrsina_trokuta(float a, float b, float c, float s);
float obujam_stosca(float r, float h);
float oplosje_stosca(float r, float s);
float obujam_valjka(float r, float h);
float oplosje_valjka(float r, float h);
float plosna_dijagonala_kocke(float a);
float prostorna_dijagonala_kocke(float a);
float obujam_kugle(float r);
float oplosje_kugle(float r);
int analiticka_geometrija();
//int analiticka_geometrija();
void jednadzba_pravca(TOCKA* poknatocku);
float udaljenost_pravac_tocka(TOCKA* poknatocku, float k, float l);
float udaljenost_dvije_tocke(TOCKA*);
//int dec_to_bin(long long dec);
float rjesenje1(float A, float B, float C);
float rjesenje2(float A, float B, float C);
char ieee754_jednostruko(float rbroj, char*);
void mantisa(float rbroj, char* ie1);
void aniz(float a1, int n, float d);
void gniz(float a1, int n, float q);
//void ispis_cetiri(const int polje[], const int n);

#endif // !1