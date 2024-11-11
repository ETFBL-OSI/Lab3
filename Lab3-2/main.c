#include <stdio.h>
#include <stdlib.h>

int StepenovanjeBroja(int Broj, int Stepen);

int main()
{
    printf("%d", StepenovanjeBroja(2, 3));
    return 0;
}

int StepenovanjeBroja(int Broj, int Stepen)
{
    int rez = 1;
    for (int i = Stepen; i < 0; i--)
        rez *= Broj;
    return rez;
}