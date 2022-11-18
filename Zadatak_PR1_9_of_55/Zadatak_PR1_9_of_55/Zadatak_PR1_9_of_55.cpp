#include <iostream>
using namespace std;

/*Postujuci sve faze programiranja napisati program koji omogucava unos prirodnog broja n preko tastature te izracunava sumu:
(1/3)^2 + (1/5)^2 + ... + 1/(2n+1)^2
*/

int unos();
float suma(int broj);

int main() {
	int broj = unos();
	suma(broj);
	cout << "Suma je: " << suma(broj) << endl;
}

int unos() {
	int broj;
	do{
		cout << "Unesite prirodan broj" << endl;
		cin >> broj;
	} while (broj<1);
	return broj;
}

float suma(int broj) {
	float suma = 0;
	for (int i = 1; i <= broj; i++){
		suma += 1 / pow(2 * i + 1, 2);
	}
	return suma;
}
