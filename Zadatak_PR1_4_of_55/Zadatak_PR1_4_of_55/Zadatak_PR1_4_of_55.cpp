#include<iostream>
using namespace std;

/*a) Omoguciti korisniku unos prirodnog broja i nakon toga napraviti funkciju koja ce prebrojati koliko taj broj ima cifara

b) Za taj broj pronaci i ispisati prvu, srednju i zadnju cifru(koristiti zasebne funkcije)

c) Obrnuti cifre tom broju(npr.ako je broj bio 12345 treba biti 54321)*/

int prebroji(int);
int obrni(int);
int srednjacifra(int);
int prva(int);
int zadnja(int);
int main() {
	int broj;
	do {
		cout << "Molim vas unesite prirodan broj: " << endl;
		cin >> broj;
	} while (broj < 1); // da bismo izasli iz petlje potrebno je unijeti prirodan broj, tj onaj koji je veci ili jednak 1.
	cout << "Uneseni broj je: " << broj << endl;
	cout << "Cifra obrnuta je: " << obrni(broj) << endl;
	srednjacifra(broj);
	cout << "Prva cifra: " << prva(broj) << endl;
	cout << "Zadnja cifra: " << zadnja(broj) << endl;

	cin.get();
	return 0;
}
int prebroji(int broj) { // brojac se povecava sve dok broj ispunjava uslov, tj. da je veci od 0, smanjivanjem vrijednosti broja ce se povecati brojac
	int brojac = 0;
	while (broj > 0) {
		broj /= 10;
		brojac++;
	}
	return brojac;
}
int obrni(int broj) {
	int pomocna = 0;//pomocna varijabla koja ce da sacuva obrnut broj od unesenog
	while (broj > 0) {//petlja koja radi sa pomocnom varijablom, kako se petlja vrti, pomocna varijabla raste, cifre iz unesene 
		pomocna = pomocna * 10 + broj % 10;//varijable se prebacuju u pomocnu
		broj /= 10;//broj se dijeli sa 10 bez ostatka kako bi izgubio posljednju cifru
	}
	return pomocna;
}
int srednjacifra(int broj) {
	int brojcifri = prebroji(broj);//funkcija koristi broj cifara kako bi odredila koji od 2 uvjeta ce se izvrsavati
	if (brojcifri % 2 == 0) {//slucaj ako broj ima paran broj cifara, onda nema srednje cifre
		cout << "Broj ima paran broj cifara stoga ne postoji srednja cifra" << endl; 
	}
	else {// slucaj kada broj ima neparan broj cifara
		broj = broj / pow(10.0, brojcifri / 2);
		broj = broj % 10;
		cout << "Srednja cifra je: " << broj<< endl;
		return broj;
	}
}
int prva(int broj) {
	while (broj >= 10) {//petlja se vrti sve do prve cifre koja mora biti manja od 10 tj. dok prestane da ispunjava uslov
		broj /= 10;
	}
	return broj;
}
int zadnja(int broj) {
	return broj % 10; // zadnja cifra je ustvari modulo (ostatak dijeljenja ukupnog broja sa 10
}