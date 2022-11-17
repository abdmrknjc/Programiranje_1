#include <iostream>

using namespace std;

/*Napisati program koji ce omoguciti unos prirodnog broja A(A > 100000), te kreirati i ispisati broj B
koji ce se sastojati od cifara broja A u obrnutom redoslijedu u kojem je svaka parna uklonjena.
(npr.ako se unese 45362792 funkcija ce vratiti 9735).Ispisati razliku brojeva A i B.

(Obavezno koristiti bar jednu korisnicki definiranu funkciju.)*/

int makeB(int);

int main() {
	int A;
	int B;
	do
	{
		cout << "Unesite broj veci od 100000" << endl;
		cin >> A;
		if (A<100000)
		{
			cout << "Pogresan unos" << endl;
		}
	} while (A<100000);
	B = makeB(A);
	cout << B << endl;
	cout << "Broj A: " << A << "\t" << " Broj B: " << B << endl;
	
}

int makeB(int A) {
	int B = 0;
	int cifra = 0;
	while (A > 0)
	{
		cifra = A % 10;
		if (cifra%2==0)
		{
			A /= 10;
		}
		else
		{
			B = B * 10 + cifra;
			A /= 10;
		}
	}
	return B;
}