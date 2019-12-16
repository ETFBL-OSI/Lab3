#include <stdio.h>
#include <stdlib.h>

int korijen(int n)
{
	printf("Korijen broja %d je %d.",n,sqrt(n));
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

int main()
{
    printf("Hello world!\n");
    return 0;
}
