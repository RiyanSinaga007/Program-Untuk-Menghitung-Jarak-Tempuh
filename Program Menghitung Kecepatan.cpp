#include <stdio.h>
#include <conio.h>
int main ()
{
	float V, S, T;
	printf ("masukan kecepatan= ");
	scanf ("%f" ,&V);
	printf ("masukan waktu yang di tempuh= ");
	scanf ("%f" ,&T);
	S = V * T;
	printf ("maka jarak yang ditempuh adalah= %f" ,S);
	return 0;
}
