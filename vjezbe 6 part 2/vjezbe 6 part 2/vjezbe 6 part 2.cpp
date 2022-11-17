#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void main() {
	//squareOfSymbol(6, '\r');
	//maxOfElements();
	//cout << sumOfSeries(5);
	/*int broj2 = 455;*/
	/*cout << &broj2 + 0 << endl;
	cout << &broj2 + 2 << endl;
	cout << &broj2 + 1 << endl;*/
	int arr[] = { 1,-3,22,15,44,-4,5 };
	// cout << size(arr);
	//* --> prima adresu s desne strane *(adresa)
	// [] --> prima adresu sa lijeve strane (i radi ppomak)
	cout << (&*(&arr[2] + 1) + 1)[0] << endl;
}
//void squareOfSymbol(int N, char symbol) {
//	if (N<0)
//		return;
//	for (int i = 0; i < N; i++){
//		for (int j = 0; j < N; j++){
//			cout << symbol << " ";
//		}
//		cout << endl;
//	}
//}

//int maxOfElements() {
//	int max = INT_MIN;
//	int x = 0;
//	for (int i = 0; i < 5; i++){
//		cout << "Enter x: " << endl;
//		cin >> x;
//		if (max < x){
//			max = x;
//		}
//		// 2. max = get_max(x, max);
//		// 3. max = (max < x)? x : max;
//
//	}
//	return max;
//}

//int minOfElements() {
//	int min = INT_MIN;
//	int x = 0;
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter x: " << endl;
//		cin >> x;
//		if (min < x) {
//			min = x;
//		}
//		// 2. min = get_min(x, min);
//		// 3. min = (min < x)? x : min;
//
//	}
//	return min;
//}

//int sumOfSeries(int x) {
//	int sum = 0, temp = 0;
//	for (int i = 0; i < x; i++){
//		temp *= 10;
//		temp += 9;
//		cout << temp;
//	}
//	return sum;
//}