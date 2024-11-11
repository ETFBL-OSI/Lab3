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


    int ts=saberi(10, 5);
    printf("%d",ts);



    return 0;

}
