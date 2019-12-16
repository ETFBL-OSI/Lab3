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

int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    korijen(n);
    return 0;
}
