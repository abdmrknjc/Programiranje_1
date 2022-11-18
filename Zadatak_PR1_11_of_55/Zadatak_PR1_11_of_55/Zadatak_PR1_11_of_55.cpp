#include <iostream>
#include <cmath>
using namespace std;

/*Napisati program koji korisniku omogucava unos realnog broja x,
cijelog broja m i odabir funkcije za proracun datog izraza.
Korisnik bira funkciju unosom sljedecih karaktera 's' (sin), 'c' (cos), 'q' (sqrt), 'p' (pow).
U slucaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti
ispisati odgovarajucu poruku i ponoviti odabir.
Funkciji pow postavite broj 2 za drugi parametar.

Za odabranu funkciju izraz je:

1/sin((x/1)+x) + 2/sin((x/2)+x) + ... m/sin((x/m)+x)

Broj faktora u izrazu odgovara unesenom broju m. U rjesenju obavezno iskoristiti switch iskaz.
*/

float unosx() {
	float x;
	cout << "Unesite realan broj x: " << endl;
	cin >> x;
	return x;
}

int unosm() {
	int m;
	cout << "Unesite cijeli broj m: " << endl;
	cin >> m;
	return m;
}

float rjesenje(float x,int m) {
	char izbor;
	float rjesenje = 0;
	do{
		cout << "Izaberite s za sin, c za cos, q za sqrt, p za pow: " << endl;
		cin >> izbor;
		if (izbor != 's' && izbor != 'c' && izbor != 'q' && izbor != 'p')
		{
			cout << "Pogresan odabir " << endl;
		}
	} while (izbor != 's' && izbor != 'c' && izbor != 'q' && izbor != 'p');
	switch (izbor)
	{
	case 's': {
		for (int i = 1; i <= m; i++){
			rjesenje += i / (sin (x/i)+x);
		}
		return rjesenje;
		break;
	}
	case 'c': {
		for (int i = 1; i <= m; i++){
			rjesenje += i / (cos(x / i) + x);
		}
		return rjesenje;
		break;
	}
	case 'q': {
		for (int i = 1; i <= m; i++){
			rjesenje += i / (sqrt(x / i) + x);
		}
		return rjesenje;
		break;
	}
	case 'p': {
		for (int i = 1; i <= m; i++){
			rjesenje += i / (pow(x / i, 2) + x);
		}
		return rjesenje;
		break;
	}
	default:
		cout << "Restartujte program!" << endl;
	}
}

int main() {
	float x = unosx();
	int m = unosm();
	cout << "Rjesenje je: " << rjesenje(x,m) << endl;
}
