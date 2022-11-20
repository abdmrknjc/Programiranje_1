#include<iostream>
using namespace std;

/*Napisati program koji omogucava korisniku unos prirodnog broja N (50 < N < 5000000).
Zatim uneseni broj proslijediti funkciji kao parametar po referenci.
U funkciji je od unesenog broja potrebno kreirati novi broj teko sto ce se poredak cifri unesenog broja obrnuti.
Prilikom obrtanja potrebno je odbaciti neparne cifre.

Npr. Za uneseni broj 1234567 obrnuti broj bez neparnih cifara je 642.*/

int unosn() {
	int n;
	do{
		cout << "Unesite prirodan broj N (50 < N < 5000000): " << endl;
		cin >> n;
	} while (n<50 || n>5000000);
	return n;
}

void novibr(int& n) {
	int b = 0;
	int cifra;
	while (n>0){
		cifra = n % 10;
		if (cifra%2!=0){
			n /= 10;
		}
		else{
			b = b * 10 + cifra;
			n /= 10;
		}
	}
	n = b;
	cout << "Drugi broj je: " << n << endl;
}

int main() {
	int n = unosn();
	cout << "Prvi broj je: " << n << endl;
	novibr(n);
}