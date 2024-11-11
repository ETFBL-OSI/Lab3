#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double kvadratni_korijen(double a) {
    return sqrt(a);
}

int saberi(int a, int b){
return a+b;
}


int main()
{
    printf("Kvadratni korijen broja 4 je: %.2lf.\n", kvadratni_korijen(4));
    return 0;
}
