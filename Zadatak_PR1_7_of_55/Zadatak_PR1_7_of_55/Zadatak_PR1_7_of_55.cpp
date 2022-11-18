#include <iostream>
using namespace std;

/* Napisite program, postujuci sve faze procesa programiranja, koji ce ispisati
 sve troznamenkaste brojeve koji su jednaki sumi faktorijela svojih znamenki – ABC = A! + B! + C!
 Upotrijebite funkcije! */

void ispis();
int sumaFaktorijelaCifri(int N);

int main()
{
	ispis();
	return 0;
}

int sumaFaktorijelaCifri(int N)
{
	int suma = 0;

	while (N > 0)
	{
		int temp = N % 10;
		int faktorijel = 1;

		for (int i = 1; i <= temp; i++)
		{
			faktorijel *= i;
		}

		suma += faktorijel;
		N /= 10;
	}

	return suma;
}

void ispis()
{
	for (int i = 100; i <= 999; i++)
	{
		if (i == sumaFaktorijelaCifri(i))
			cout << i << endl;
	}
}