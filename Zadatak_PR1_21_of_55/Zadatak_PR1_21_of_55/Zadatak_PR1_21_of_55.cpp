#include<iostream>
#include<ctime>

using namespace std;

/*Napisati program koji ce omoguciti korisniku unos broja n (uz uslov 10 <= n <= 1000).
Zatim simulirati unos n slucajnih vrijednosti. Simuliranje unosa ostvariti funkcijom rand() % 1000 + 1.
Izracunati statisticke podatke u kojem procentu se od n generisanih slucajnih vrijednosti pojavljuje prost broj.

Npr. Ako je generisano 10 brojeva (n = 10): 5,7,4,13,17,20,25,23,30,45, u ovom uzorku od 10 brojeva postoji 5
prostih brojeva pa je procenat prostih brojeva u ovom slucaju 50%.

(Napomena: Po zelji kreirati dodatne funkcije da se olakša rjesavanje zadatka.)
*/


int unos();
bool prost(int broj);
int procenat(int broj);

int unos() {
	int broj;
	do
	{
		cout << "Unesite broj n (uz uslov 10 <= n <= 1000): " << endl;
		cin >> broj;
	} while (broj < 10 || broj > 1000);
	return broj;
}

bool prost(int broj) {
	for (int i = 2; i < broj; i++)
	{
		if (broj % i == 0)
		{
			return false;
		}
		if (broj==1)
		{
			return false;
		}
	}
	return true;
}

int procenat(int broj) {
	int proc = broj * 100;
	return proc;
}

int main() {
	srand(time(NULL));
	int n = unos();
	float brojac = 0;
	for (int i = 0; i < n; i++)
	{
		int varijabla = rand() % 1000 + 1;
		if (prost(varijabla))
		{
			brojac++;
		}
	}
	cout << "Za unesene podatke ima: " << brojac << " prostih brojeva. " << endl;
	cout << "Procenat prostih brojeva je " << procenat(brojac)/n << " % " << endl;
}