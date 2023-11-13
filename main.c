#include <math.h>
#include <stdarg.h>

int Oduzimanje_N_brojeva(int n, ...)
{
    va_list oduzimanje;
    va_start(oduzimanje, n);
    int s = va_arg(oduzimanje, int);
    for (int i = 1; i < n; i++)
    {
        s -= va_arg(oduzimanje, int);
    }
    va_end(oduzimanje);
    return s;
}

void stepen_broja()
{
    int n,s;
    printf("Unesi broj: ");
    scanf("%d", &n);
    printf("Unesi stepen broja: ");
    scanf("%d",  &s);
    printf("%d", pow(n,s));
}

double srednja_vrijednost(double x, double y) {

	double rez = (x + y) / 2;
	return rez;
}

int sumaNbrojeva(int n, int *niz) {
	int suma = 0;
	for (int i = 0; i < n;i++) {
		suma += niz[i];
	}

	return suma;
}

float podijeli_dva_broja(int a, int b){
    if(b==0) return a/b;
}

int sabiranje2broja(int a, int b)
{
    return a + b;
}

int main()
{
    int a=4,b=7,c=2,d=1,e=5,f=6,g=3;
    int najmanji_od_n_brojeva=0;
    int najveci_od_n_brojeva=0;
    int srednja_vrijednost=0;
    int stepenovanje_broja=0;
    int kvadratni_korjen=0;
    int dijeljenje_2_broja=0;
    int mnozenje_n_brojeva=0;
    int mnozenje_2_broja=0;
    int oduzimanje_n_brojeva=0;
    int oduzimanje_2_broja=0;
    int sabiranje_n_brojeva=0;
    int sabiranje_2_broja=0;


    return 0;
}

