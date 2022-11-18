#include <iostream>
using namespace std;

/*Postujuci sve faze procesa programiranja, napisite program,
koji za uneseni prirodni broj n i realni broj x izracunava:
S = cos(x) + cos(x^2) + cos(x^3) + ... + cos(x^n)
*/

int unosN() {
	int n;
	do
	{
		cout << "Unesite prirodan broj" << endl;
		cin >> n;
	} while (n<1);
	return n;
}

float unosx() {
	float x;
	cout << "Unesite realan broj x" << endl;
	cin >> x;
	return x;
}

int main() {
	int n = unosN();
	float x = unosx();
	float rjesenje=0;
	for (int i = 1; i <= n; i++)
	{
		rjesenje += cos(pow(x, i));
	}
	cout << "Rjesenje: " << rjesenje << endl;
}