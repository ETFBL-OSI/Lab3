#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void korijen(int n)
{
	printf("Korijen broja %d je: ",n);
	int p;
	p=sqrt(n);
	printf("%d",p);
}


int zbir(int a, int b)
{
    return a+b;
}
int djeljenje(int a, int b)
{
    return a/b;
}
int mnozenje(int a, int b)
{
    return a*b;

}

int stepenovanje(int x)
{

    int y;
    y=x*x;
    return y;
}

void SumaBrojeva(int n)
{
    int br, suma=0, i;
    for( i=0; i < n; i++)
    {
        printf("%d. broj: ", i+1); scanf("%d", &br);
        suma+=br;
    }
    printf("Suma brojeva je %d.", suma);
}

int oduzimanje(int a, int b){
    return a - b;
}

int main()
{
    int o;

    do{
        printf("Unesite opciju: \n");
        printf("Mnozenje 2 broja     : [1]\n");
        printf("Dijeljenje 2 broja   : [2]\n");
        printf("Stepenovanje broja   : [3]\n");
        printf("Sabiranje n-brojeva  : [4]\n");
        printf("Sabiranje 2 broja    : [5]\n");
        printf("Oduzimanje 2 broja   : [6]\n");
        printf("Korijen broja        : [7]\n");
        printf("KRAJ                   [0]\n");
        printf("Unesite opciju: ");
        scanf("%d", &o);

        if ( o == 1 ){
            printf("Unesite 2 broja: ");
            int a,b;
            scanf("%d %d", &a, &b);
            printf("Rezultat je: %d\n", mnozenje(a,b));
        }else if ( o == 2 ){
            printf("Unesite 2 broja: ");
            int a,b;
            scanf("%d %d", &a, &b);
            if ( b == 0 ){
                printf("Funkcija dijeljenja nije definisana\n");
            }else{
                printf("Broj %d podijeljen %d je: %d\n", a, b, djeljenje(a,b));
            }
        }else if ( o == 3 ){
            printf("Unesite broj: ");
            int a;
            scanf("%d", &a);
            printf("Rez. kvadriranja broja %d je: %d\n", a, stepenovanje(a));
        }else if ( o == 4 ){
            printf("Unesite broj elemenata niza: ");
            int n;
            scanf("%d", &n);
            SumaBrojeva(n);
        }else if ( o == 5 ){
            printf("Unesite dva broja: ");
            int a,b;
            scanf("%d %d", &a, &b);
            printf("Zbir brojeva %d i %d je: %d\n", a,b, zbir(a, b));
        }else if ( o == 6 ){
            printf("Unesite dva broja: ");
            int a,b;
            scanf("%d %d", &a, &b);
            printf("Razlika brojeva %d i %d je: %d\n", a, b, oduzimanje(a, b));

        }else if ( o == 7 ){
            printf("Unesite broj: ");
            int broj;
            scanf("%d", &broj);
            korijen(broj);
            printf("\n");
        }

        printf("\n");
        if ( o < 0 || o >= 8 ){
            printf("Niste unijeli ni jednu od ponudjenih naredbi!!!\nPOKUSAJTE PONOVO!!!\n\n");
        }
    }while ( o != 0 );
    return 0;
}
