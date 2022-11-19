#include <iostream>
using namespace std;

/*Postujuci sve faze procesa programiranja napisati program koji ce pronaci i ispisati
sve brojeve od X do Y (ukljucujuci granicne vrijednosti) koji su djeljivi svim svojim ciframa.

Na primjer, broj 36 je djeljiv svim svojim ciframa (36/6=6 i 36/3=12).

Brojeve X i Y unosi korisnik i oni moraju biti u opsegu od 10 do 6000.

Obavezno koristiti bar jednu funkciju.*/

int unosx() {
	int x;
	do{
		cout << "Unesite broj od 10 do 6000" << endl;
		cin >> x;
	} while (x < 10 || x > 6000);
	return x;
}

int unosy() {
	int y;
	do {
		cout << "Unesite broj od 10 do 6000" << endl;
		cin >> y;
	} while (y < 10 || y > 6000);
	return y;
}

bool ispitaj(int a) {
	while (a){
		if (a % 10 == 0) // provjera djeljivosti zadnje cifre, ako je cifra 0, vraca false
			return false;
		if (a % (a % 10) != 0) // ponovna provjera djeljivost zadnje cifre, ako prodje ovaj uslov, ide na pretposljednju cifru itd.
			return false;
		a /= 10;
	}
	return true;
}

int main() {
	int temp;
	int x = unosx();
	int y = unosy();
	if (x>y)//zamjena u slucaju da je prva unesena veca od druge
	{
		temp = y;
		y = x;
		x = temp;
	}
	cout << "Brojevi koji su djeljivi sa svim svojim ciframa su: " << endl;
	for (int i = x; i < y; i++)
	{
		if (ispitaj(i))
			cout << i << endl;
	}
}