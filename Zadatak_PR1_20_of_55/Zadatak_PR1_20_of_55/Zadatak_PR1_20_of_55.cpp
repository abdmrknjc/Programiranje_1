#include<iostream>
#include<time.h>
using namespace std;

/*Napisati program koji ce omoguciti korisniku unos broja n ( 10 <= n <= 1000).
Zatim simulirati n bacanja kockice (kockica ima 6 strana i na tim stranicama su brojevi 1-6).
Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1.
Izracunati staticke podatke u kojem procentu ukupnog bacanja se dobiva svaki od mogucih brojeva 1-6.
Obavezno koristiti switch statement za zbrajanje rezultata bacanja kockice.

Napomena: Po zelji kreirati dodatne funkcije da se olaksa rjesavanje zadataka.
*/

float unosn();
int baci();
float procenat(float n);

float unosn() {
	float n;
	do
	{
		cout << "Unesite prirodan broj n,veci od 10 manji od 1000: " << endl;
		cin >> n;
	} while (n<=10 || n>=1000);
	return n;
}

int baci() {
	int kocka = rand() % 6 + 1;
	return kocka;
}

float procenat(float n) {
	float procenat = n * 100.0;
	return procenat;
}

int main() {
	int baceno = 0;
	int case1 = 0;
	int case2 = 0;
	int case3 = 0;
	int case4 = 0;
	int case5 = 0;
	int case6 = 0;
	float n = unosn();
	while (baceno<n)
	{
		int kocka = baci();
		switch (kocka)
		{
		case 1: {
			case1++;
				break;
		}
		case 2: {
			case2++;
			break;
		}
		case 3: {
			case3++;
			break;
		}
		case 4: {
			case4++;
			break;
		}
		case 5: {
			case5++;
			break;
		}
		case 6: {
			case6++;
			break;
		}
		default:
			cout << "Bacanje nije ok. " << endl;
			break;
		}
		cout << baci() << endl;
		baceno++;
	}
	cout << "Procenat dobijanja 1 je: " << procenat(case1) / n << " % " << endl;
	cout << "Procenat dobijanja 2 je: " << procenat(case2) / n << " % " << endl;
	cout << "Procenat dobijanja 3 je: " << procenat(case3) / n << " % " << endl;
	cout << "Procenat dobijanja 4 je: " << procenat(case4) / n << " % " << endl;
	cout << "Procenat dobijanja 5 je: " << procenat(case5) / n << " % " << endl;
	cout << "Procenat dobijanja 6 je: " << procenat(case6) / n << " % " << endl;


}