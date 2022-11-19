#include <iostream>
#include <iomanip>
using namespace std;

/*Napisati program koji korisniku omogucava unos cijelog broja n, te izracunava:

S = [1/(n + 1)] - [2/((n - 1) + 2!)] + [3/((n - 2) + 3!)] - [4/((n - 3) + 4!)] + ... + (-1)^(n - 1) * [n/(1 + n!)]
*/

int unos() {
	int broj;
	cout << "Unesite cijeli broj: " << endl;
	cin >> broj;
	return broj;
}

int faktorijel(int broj) {
	int F = 1;
	for (int i = 1; i <= broj; i++){
		F *= i;
	}
	return F;
}

float suma(int broj) {
	float suma = 0;
	for (int i = 1; i <= broj; i++){
		suma += pow(-1, i - 1) * (i / 1 + (faktorijel(i)));
	}
	return suma;
}

int main() {
	int n = unos();
	faktorijel(n);
	cout << "Suma je: " << suma(n) << endl;
}