
#include <stdio.h>

int mnozenje(int a, int b)
{
    return a*b;
}


int oduzimanje_2_br(int a, int b)
{
    return a-b;
}

int sumaNbrojeva(int n, int *niz) {
	int suma = 0;
	for (int i = 0; i < n;i++) {
		suma += niz[i];
	}

	return suma;
}

