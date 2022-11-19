#include <iostream>
#include <cmath>
using namespace std;

/*Napisati program koji ce omoguciti unos prirodnog broja A (A > 100000),
te kreirati i ispisati broj B koji ce se sastojati od cifara broja A u obrnutom redoslijedu gdje je svaka parna cifra uklonjena.

Npr. ako se unese 45362792, funkcija treba vratiti 9735
Ispisati razliku brojeva A i B

(Obavezno koristiti bar jednu korisnicki definisanu funkciju)
*/

int unosa();
int brojb(int);

int main() {
	int a = unosa();
	int b = brojb(a);
	cout << "Prvi broj je: " << a << ", " << "a drugi je: " << b << endl;
	cout << "Razlika brojeva je: " << abs(a - b) << endl;
	return 0;
}

int unosa() {
	int a;
	do
	{
		cout << "Unesite broj a (a>100000): " << endl;
		cin >> a;
	} while (a<=100000);
	return a;
}

int brojb(int a) {
	int b = 0;
	int cifra;
	while (a>0)
	{
		cifra = a % 10;
		if (cifra%2==0)
		{
			a /= 10;
		}
		else
		{
			b = b * 10 + cifra;
			a /= 10;
		}
	}
	return b;
}