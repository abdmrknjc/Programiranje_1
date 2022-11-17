#include <iostream>
using namespace std;
/*
Napisati funkciju 'enterArrayElements' koja prima dva ulazna parametra:
1. niz 'arr'.
2. velièinu niza 'size'.
Omoguæiti korisnièki unos elemenata niza.
*/

void enterArrayElements(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "Unesite elemente niza [" << i << "]: " << endl;
		cin >> arr[i];
		//cin >> *(arr + i);
	}
}
/*
Napisati funkciju 'printArrayElements' koja prima tri ulazna parametra:
1. niz 'arr'.
2. velièinu niza 'size'.
3. delimiter 'd' (karakter koji se ispisuje izmeðu dva susjedna elementa. Podrazumijevana vrijednost je space ' ')
Omoguæiti ispis elemenata niza uzimajuæi u obzir delimiter.
*/

void printArrayElements(int arr[], int size, char d = ' ') {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i < size - 1) {
			cout << d;
		}
	}
}

/*
Napisati funkciju 'enterElementAtPosition' koja prima èetiri ulazna parametra:
1. niz 'arr'.
2. velièinu niza 'size'.
3. index (mjesto gdje upisujemo novu vrijednost)
4. value (vrijednost koju upisujemo)
*/

void enterElementAtPosition(int arr[], int size, int index, int value) {
	if (index < 0 || index >= size)
		return;
	arr[index] = value;

	// *(arr + index) = value; 2.parc
}

/*
Napisati funkciju 'getMinElement' koja prima dva ulazna parametra:
1. niz 'arr'.
2. velièinu niza 'size'.
Funkcija treba da vrati najmanju vrijednost niza.
*/

int maximum(int a, int b) { return (a > b) ? a : b; }
int minimum(int a, int b) { return (a < b) ? a : b; }

int getMinElement(int arr[], int size) {
	int min = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		min = minimum(min, arr[i]); // vrijednost varijable min ce se mijenjati samo u slucaju da je min veca od varijable i u petlji
	}
	return min;
}

/*
Napisati funkciju 'getMaxElement' koja prima dva ulazna parametra:
1. niz 'arr'.
2. velièinu niza 'size'.
Funkcija treba da vrati najveæu vrijednost niza.
*/

int getMaxElement(int arr[], int size) {
	int max = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		max = maximum(max, arr[i]); // vrijednost varijable min ce se mijenjati samo u slucaju da je min veca od varijable i u petlji
	}
	return max;
}

/*
Napisati funkciju 'getMostOccurredElement' koja prima dva ulazna parametra:
1. niz 'arr'.
2. velièinu niza 'size'.
Funkcija treba da vrati broj koji se pojavljuje najviše puta u nizu.
*/

int getMostOccurredElement(int arr[], int size) {
	int counter = 0;
	int maxCount = 0;
	int element = arr[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				counter++;
			}
			if (counter > maxCount)
			{
				maxCount = counter;
			}
		} counter = 0; // mora biti da se brojac resetuje
	}
	return element;
}

/*
Napisati funkciju 'isAscending' koja prima dva ulazna parametra:
1. niz 'arr'.
2. velièinu niza 'size'.
Funkcija treba da vrati logièku vrijednost koja oznaèava da li su elementi niza uzlazno sortirani.
*/

bool isAscending(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (i < size - 1)
			if (arr[i] > arr[i + 1]) {
				return false;
			}
		return true;
	}
}

/*
Napisati funkciju 'isDescending' koja prima dva ulazna parametra:
1. niz 'arr'.
2. velièinu niza 'size'.
Funkcija treba da vrati logièku vrijednost koja oznaèava da li su elementi niza silazno sortirani.
*/

bool isDescending(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (i < size - 1)
			if (arr[i] < arr[i + 1]) {
				return false;
			}
		return true;
	}
}

/*naci najslicniji element u nizu sa vrijednosti val*/

int mostSimilar(int arr[], int size, int val) {
	int diff = INT_MAX, similarValue = arr[0];
	for (int i = 0; i < size; i++)
	{

		if (diff > abs(val - arr[i]))
		{
			diff = abs(val - arr[i]);
			similarValue = arr[i];
		}
	}
	return similarValue;
}

void main() {
	int arr[5];
	enterArrayElements(arr, size(arr));

	printArrayElements(arr, size(arr), '\t'); // \t je za razmak izmedju clanova niza


	//enterElementAtPosition(arr, size(arr), 3, 55); 
	cout << "Min is: " << getMinElement(arr, size(arr)) << endl;
	cout << "Max is: " << getMaxElement(arr, size(arr)) << endl;
}