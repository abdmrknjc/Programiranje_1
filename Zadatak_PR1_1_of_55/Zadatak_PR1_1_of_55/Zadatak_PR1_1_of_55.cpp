#include <iostream>
#include <math.h>
using namespace std;

/*Postujuci sve faze programiranja, napisati program koji korisniku omogucava
unos realnog broja x i odabir funkcije za proracun datog izraza.
Korisnik bira funkciju unosom jednog od sljedecih karaktera: 's'(sin), 'c'(cos).
U slucaju da korisnik unese karakter koji ne odgovara niti jednog od predefinisanih
vrijednosti ispisati odgovarajucu poruku i ponoviti odabir.

Za odabranu funkciju sin izraz je: f(x) = 1 + 1 / (sin(x)+x) + 2 / (sin (x/2) + x) + (...) x / (sin (x/x) + x) 
*/


float unosBroja() {
	float broj=0.0;
	cout << "Unesite realan broj" << endl;
	cin >> broj;
	return broj;
}

char odabir() {
	char slovo;
	cout << "Unesite slovo s ili c" << endl;
	do{
		cin >> slovo;
		if (slovo != 's' && slovo != 'c')
		{
			cout << "Odabir nije uredan. Unesite slovo s za funkciju sin ili c za funkciju cos" << endl;
		}
	} while (slovo != 's' && slovo != 'c');
	return slovo;
}
float rezultat(float broj, char slovo) {
	float rjesenje = 0.0;
	if (slovo == 's')
	{
		for (int i = 1; i <= broj; i++)
		{
			rjesenje += i / (sin(broj/i) + broj);
		}
		return rjesenje+1;
	}
	else {
		for (int i = 1; i <= broj; i++)
		{
			rjesenje += i / (cos(broj / i) + broj);
		}
		return rjesenje + 1;
	}

}

int main() {
	float broj = unosBroja();
	char odabir1 = odabir();
	cout << "Rezultat je " << rezultat(broj, odabir1);
}
