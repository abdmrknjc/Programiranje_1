#include <iostream>
using namespace std;

/*
Napisati program koji omogucava unos realnog broja x, cijelog broja m (m > 0) i odabir funkcije za proracun datog izraza.
Korisnik bira funkciju unosom jednog od sljedecih karaktera: 's' (sabiranje), 'o' (oduzimanje), 'm' (mnozenje), 'd' (dijeljenje).
U slucaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajcu poruku i ponoviti odabir.

Za odabir funkcije s izraz je: f(x, m) = (x - 1) * 1 + (x - 2) * 2 + ... + (x - m) * m

Za odabir funkcije o izraz je: f(x, m) = (x - 1) * 1 - (x - 2) * 2 - ... - (x - m) * m itd.

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
	do{
		cout << "Unesite broj m, koji je m > 0: ";
		cin >> m;
	} while (m<0);
	return m;
}

float racun(float x, int m) {
	float rjesenje = 0;
	float rjesenjemd = 1; // mora da se koristi u mnozenju i dijeljenju jer je 1 neutralan clan!!
	char izbor;
	do{
		cout << "Unesite slovo s za sabiranje, o za oduzimanje, m za mnozenje, d za dijeljenje: " << endl;
		cin >> izbor;
		if (izbor != 's' && izbor != 'o' && izbor != 'm' && izbor != 'd'){
			cout << "Pogresan unos! " << endl;
		}
	} while (izbor != 's' && izbor != 'o' && izbor != 'm' && izbor != 'd');
	switch (izbor){
	case 's': {

		for (int i = 1; i <= m; i++){
			rjesenje += (x - i) * i; //u ovoj i naredne 3 petlje se koristi "i" u formuli jer je "i" brojac!!!
		}
		return rjesenje;
		break;
	}
	case 'o': {
		for (int i = 1; i <= m; i++) {
			rjesenje -= (x - i) * i;
		}
	}
	case 'm': {
		for (int i = 1; i <= m; i++){
			rjesenjemd *= (x - i) * i;
		}
		return rjesenjemd;
		break;
	}
	case 'd': {
		for (int i = 1; i <= m; i++)
		{
			rjesenjemd /= (x - i) * i;
		}
		return rjesenjemd;
		break;
	}
	
	default: {
		cout << "Restartujte program! " << endl;
	}
	}
}

int main() {
	float x = unosx();
	int m = unosm();
	cout << "Rezultat: " << racun(x, m) << endl;
}