#include <iostream>
using namespace std;

/*Postujuci sve faze programiranja, napisati program koji korisniku omogucava
unos realnog broja x i odabir funkcije za proracun datog izraza.
Korisnik bira funkciju unosom jednog od sljedecih karaktera: 's'(sin), 'c'(cos).
U slucaju da korisnik unese karakter koji ne odgovara niti jednog od predefinisanih
vrijednosti ispisati odgovarajucu poruku i ponoviti odabir.

Za odabranu funkciju sin izraz je: f(x) = 1 + 1 / (sin(x)+x) + 2 / (sin (x/2) + x) + (...) x / (sin (x/x) + x) 
*/

float unosx(){
	float x;
	cout << "Unesite realan broj x" << endl;
	cin >> x;
	return x;
}

char unos_znaka(){
	char izbor;
	do {
		cout << "Unesite znak s ili c" << endl;
		cin >> izbor;

		if (izbor != 's' && izbor != 'c')
			cout << "Unijeli ste nevazeci znak" << endl;

	} while (izbor != 's' && izbor != 'c');
	return izbor;
}

float proracun(float x, char izbor) {
	float rezultat = 1.0;
	if (izbor == 's') {
		for (int i = 1; i <= x; i++)
			rezultat += i / (sin(x / i) + x);
	}
	else {
		for (int i = 1; i <= x; i++)
			rezultat += i / (cos(x / i) + x);
	}
	return rezultat;
}

int main() {
	float x = unosx();
	char izbor = unos_znaka();

	cout << "Proracun datog izraza je " << proracun(x, izbor) << endl;
}