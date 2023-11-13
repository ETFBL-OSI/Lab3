



int proizvod_n_brojeva(int n)
{
    printf("Unesite %d brojeva:\n", n);
    for (i = 0; i < n; ++i) {
    int broj;
    scanf("%d", &broj);
    proizvod *= broj;

    return proizvod;
}

float korijen(int n)
{
    float korijen;
    korijen=sqrt(n);
    return korijen;


int Oduzimanje_N_brojeva(int n, ...)
{
    va_list oduzimanje;
    va_start(oduzimanje, n);
    int s = va_arg(oduzimanje, int);
    for (int i = 1; i < n; i++)
    {
        s -= va_arg(oduzimanje, int);
    }
    va_end(oduzimanje);
    return s;
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

