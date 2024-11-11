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

int StepenovanjeBroja(int Broj, int Stepen);

int main()
{
    printf("%d", StepenovanjeBroja(2, 3));
    int ts=saberi(10, 5);
    printf("suma 10 i 5 je = %d\n",ts);
    printf("Kvadratni korijen broja 4 je: %.2lf.\n", kvadratni_korijen(4));
    return 0;
}

int StepenovanjeBroja(int Broj, int Stepen)
{
    int rez = 1;
    for (int i = Stepen; i < 0; i--)
        rez *= Broj;
    return rez;
}