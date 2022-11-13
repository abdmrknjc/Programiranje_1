#include <iostream>
#include <iomanip>
using namespace std;

/*Napisati program koji korisniku omogucava unos cijelog broja N, te izracunava geometrijsku
sredinu svih neparnih brojeva u intervalu [1, N] koji nisu djeljivi sa brojem 5.
Rezultat trebi biti zaokruzen na dvije decimale.

Geometrijska sredina n brojeva se racuna po formuli:
(a1 * a2 * a3 * ... an)^1/n */

int unosBroja() {
	int broj1;
	cout << "Unesi cijeli broj" << endl;
	cin >> broj1;
	return broj1;
}

double gSredina(int broj2) {
	double broj3 = 1.0;
	for (int i = 1; i <= broj2; i++)
	{
		if (i%2 != 0 && i%5 !=0)
		{
			broj3 *= i;
				
		}
	}
	broj3 = pow(broj3, 1/double (broj2));
	return broj3;
}

int main() {
	int broj = unosBroja();
	double sredina = gSredina(broj);
	cout << "Geometrijska sredina " << broj << " brojeva je " << setprecision(3) << sredina;
}