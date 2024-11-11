#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double kvadratni_korijen(double a) {
    return sqrt(a);
}

int saberi(int a, int b){
return a+b;
}

int faktorijel(int n)
{
    for (int i = n-1; i > 0; i--)
    {
        n*=i;
    }
    return n;
}

float srednja_vr(int a, int b) {

    return (a + b) / 2;
}

int mnozenje(int a, int b){
return a*b;
}

int main()
{
    float c;

    c = srednja_vr(2, 5);


    int ts=saberi(10, 5);
    printf("suma 10 i 5 je = %d\n",ts);


    printf("Kvadratni korijen broja 4 je: %.2lf.\n", kvadratni_korijen(4));


    int a,b;
    printf ("Unesite broj a: ");
    scanf ("%d" , &a);
    printf ("Unesite broj b: ");
    scanf ("%d" , &b);
    int rezultat = mnozenje(a,b);
    printf ("rezultat je %d", rezultat);

  return 0;


    int ts=saberi(10, 5);
    printf("%d",ts);





    printf("suma 10 i 5 je = %d\n",saberi(10, 5));


    printf("Kvadratni korijen broja 4 je: %.2lf.\n", kvadratni_korijen(4));

    return 0;

}
