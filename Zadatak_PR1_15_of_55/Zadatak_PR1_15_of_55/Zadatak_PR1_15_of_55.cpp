#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

/*Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6).
Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1.
Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice
(npr. u šestom bacanju se dobiju brojevi 2, 2, 2, a u sedmom 4, 4, 4 na sve tri kockice).

Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov.

Nije potrebno tražiti bilo kakav unos od korisnika.
*/


int generisiBacanja();

int main() {
	srand(time(NULL));
	cout << "2 uzastopna bacanja sa istim brojem na sve 3 kockice su se desile nakon: " << generisiBacanja() << " bacanja " << endl;
	return 0;
}

int generisiBacanja() {
	int bacanje = 0;
	int identicno = 0;
	do
	{
		int kockica1 = rand() % 6 + 1;
		int kockica2 = rand() % 6 + 1;
		int kockica3 = rand() % 6 + 1;
		if (kockica1 == kockica2 && kockica2 == kockica3)
		{
			identicno++;
		}
		else
		{
			identicno = 0;
			bacanje++;
		}
	} while (identicno<2);
	return bacanje;
}