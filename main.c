
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

float podijeli_dva_broja(int a, int b){
    if(b==0) return a/b;
}
