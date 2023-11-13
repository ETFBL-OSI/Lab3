
float korijen(int n)
{
    float korijen;
    korijen=sqrt(n);
    return korijen;
}

void stepen_broja()
{
    int n,s;
    printf("Unesi broj: ");
    scanf("%d", &n);
    printf("Unesi stepen broja: ");
    scanf("%d",  &s);
    printf("%d", pow(n,s));
}

double srednja_vrijednost(double x, double y) {

	double rez = (x + y) / 2;
	return rez;

}
