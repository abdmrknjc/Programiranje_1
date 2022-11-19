#include <iostream>
using namespace std;

/*Napisati program koji omogucava unos pozitivnog broja n te pronalazi njegove parne cifre
i formira novi broj u kojem su parne cifre zamijenjene cifrom '5'.

Dodatno program treba ispisati razliku unesenog i broja koji se dobije nakon zamjene.*/

int unosn();
int novibroj(int);

int main() {
	int a = unosn();
	int b = novibroj(a);
	cout << "Prvi broj unesen je: " << a << ", " << "a drugi unesen broj je: " << b << endl;
	cout << "Razlika unesenih brojeva je: " << abs(a - b) << endl;
}

int unosn() {
	int n;
	do
	{
		cout << "Unesite pozitivan broj n: " << endl;
		cin >> n;
	} while (n<1);
	return n;
}

int novibroj(int a) {
	int b = 0;
	int brojac = 0;
	int cifra;
	while (a>0)
	{
		cifra = a % 10;
		if (cifra%2==0)
		{
			b = b + 5 * pow(10.0, brojac);
			brojac++;
			a /= 10;
		}
		else
		{
			b = b + cifra * pow(10.0, brojac);
			brojac++;
			a /= 10;
		}
	}
	return b;
}