#include <stdio.h>
#include <stdlib.h>

int mnozenje(int a, int b){
return a*b;
}

int main()
{
    int a,b;
    printf ("Unesite broj a: ");
    scanf ("%d" , &a);
    printf ("Unesite broj b: ");
    scanf ("%d" , &b);
    int rezultat = mnozenje(a,b);
    printf ("rezultat je %d", rezultat);

  return 0;
}
