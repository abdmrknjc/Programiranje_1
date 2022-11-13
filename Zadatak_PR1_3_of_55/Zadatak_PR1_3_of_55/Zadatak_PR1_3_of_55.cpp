#include <iostream>
using namespace std;

/*Napisati program u kojem je potrebno unijeti odabrani broj cifara pocevsi od cifre najvece
tezinske vrijednosti, pa od njih sastaviti i napisati prirodni broj.
Unos cifara se prekida kada se unese broj manji od 0, ukoliko korisnik unese cifru vecu od 9,
ispisati poruku da cifra nije validna, ali se unos ne prekida.

(Obavezno koristiti barem jednu korisnicki definisanu funkciju)

Ispis neka bude oblika:

Upisi cifru: 2

Upisi cifru: 8

Upisi cifru: 72

Cifra nije validna

Upisi cifru: -1

Broj sastavljen od zadanih cifara je 28.
*/

int unosCifara() {
	int cifra = 0;
	int broj = 0;
	do {
		cout << "Upisi cifru: " << endl;
		cin >> cifra;
		if (cifra >= 0 && cifra <= 9) {
			broj = broj * 10 + cifra;
		}
		else if (cifra >9) {
			cout << "Cifra nije validna. ";
		}
	} while (cifra >= 0);
	return broj;
}

int main() {
	cout << "Broj sastavljen od zadanih cifara je: " << unosCifara();
}