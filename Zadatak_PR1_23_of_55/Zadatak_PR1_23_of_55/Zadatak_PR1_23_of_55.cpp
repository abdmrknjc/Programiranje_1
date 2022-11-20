#include<iostream>
#include<cmath>
using namespace std;

/*Napisati program koji korisniku omogucava unos realnog broja x,
cijelog broja m i odabir funkcije za proracun datog izraza.
Korisnik bira funkciju unosom sljedecih karaktera 's' (sin),'c' (cos), 'q' (sqrt), 'p' (pow).
U slucaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti
ispisati odgovarajucu poruku i ponoviti odabir.Za funkciju pow() drugi parametar treba biti 3.

Za odabranu funkciju izraz je:
sin(x) + 1 + sin(x) + 2 + sin(x) + 3 + ... + sin(x) + m
Broj faktora u izrazu odgovara unesenom broju m. 
U rješenju obavezno iskoristiti switch iskaz.
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
float proracun(float x, int m) {
	char izbor;
	float rjesenje = 0;
	do
	{
		cout << "Izaberite s za sin, c za cos, q za sqrt, p za pow: " << endl;
		cin >> izbor;
	} while (izbor != 's' && izbor != 'c' && izbor != 'q' && izbor != 'p');
	switch (izbor) {
	case 's': {
			for (int i = 1; i <= m; i++) {
				rjesenje += (sin(x) + i);
			}

		return rjesenje;
		break;
	}case 'c': {
			for (int i = 1; i <= m; i++)
			{
				rjesenje += (cos(x) + i);
			}
		return rjesenje;
		break;
	}case 'q': {
			for (int i = 1; i <= m; i++)
			{
				rjesenje += (sqrt(x) + i);
			}
		return rjesenje;
		break;
	}case 'p': {
			for (int i = 1; i <= m; i++)
			{
				rjesenje += (pow(x, 3) + i);
			}
		return rjesenje;
		break;
	}
	default:
		cout << "Restartujte program! " << endl;
		break;
	}
}
int main() {
	float x = unosx();
	int m = unosm();
	cout << "Proracun je: " << proracun(x, m);
}