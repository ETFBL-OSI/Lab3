int Oduzimanje_N_brojeva(int n,...)
{
va_list oduzimanje;
va_start(oduzimanje,n);
int s=va_arg(oduzimanje,int);
for(int i=1;i<n;i++)
{
    s-=va_arg(oduzimanje,int);
}
va_end(oduzimanje);
return s;
}
