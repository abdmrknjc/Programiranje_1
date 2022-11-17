#include <iostream>
using namespace std;

/*Postujuci sve faze procesa programiranja, napisati program koji korisniku omogucava unos cijelog broja N,
te izracunava vrijednost sume faktorijela neparnih brojeva u intervalu [1, N].
Suma faktorijela prikazana je sljedecom formulom: S = 1! + 3! + 5! + ... + N!*/

int sumaFaktorijela(int);
int faktorijel(int);

int main() {
	int N;
	cout << "Unesite cijeli broj: " << endl;
	cin >> N;
	cout << "Suma faktorijela neparnih brojeva do unesenog broja je: " << sumaFaktorijela(N);
}

int sumaFaktorijela(int N) {
	int suma = 0;
	for (int i = 1; i <= N; i += 2)
	{
		suma += faktorijel(i);
	}
	return suma;
}

int faktorijel(int broj) {
	int Faktorijel = 1;
	for (int i = 1; i <= broj; i++)
	{
		Faktorijel *= i;
	}
	return Faktorijel;
}