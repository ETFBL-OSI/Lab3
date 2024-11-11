#include <stdio.h>
#include <stdlib.h>

int mnozenje_n(int n, int niz[])
{
    int result=1;
    for (int i=0; i<n;i++)
    {
        result*=niz[i];
    }
return result;
}

int main()
{

    int arr[3]={1,2,3};
    int m=mnozenje_n(3,&arr);
   printf("%d", m);

    return 0;
}
