// laby22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// zad1 skip

	// zad3
	/*int fahr, celsius;
	int start, limit, krok;

	start = 0;
	limit = 200;
	krok = 20;

	for (fahr = 0.0; fahr <=limit; fahr = fahr + krok)
	{
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		cout << fahr << "\t" << celsius << endl;
	}*/

	//zad6
	/*int fahr, celsius;
	int start, limit, krok;

	cin >> limit;
	cin >> krok;
	start = 0;
	

	for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
	{
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		cout << fahr << "\t" << celsius << endl;
	}

	return 0;*/

	//zad7
	/*float number;
	for (int i =0; i < 10; i++){
		cin >> number;
		if (number > 0){
			cout << number << endl;
		}
	}*/


	//zad8
	//for (int i = 0; i <= 100; i++) {
	//	if (i % 2 == 0) {
	//		cout << i << endl;
	//	}
	//}


	//zad9
	/*int n;
	cin >> n;
	for (int i = 0; i <= 100; i++) {
		if (i % n == 0) {
			cout << i << endl;
		}
	}*/


	//zad10
	//int n;
	//int step = 0;
	//cin >> n;
	//for (int i = 0; i <= 100; i++) {
	//	if (i%n == 0) {
	//		step++;
	//	}
	//}
	//cout << step << endl;

	//zad11

	//int a, b;

	//cin >> a;
	//cin >> b;
	//if (a < b) {
	//	for (int i = a; i <= b; i++) {
	//		if (i%3==0) {
	//			cout << i << endl;
	//		}
	//	}
	//}
	//else {
	//	for (int i = b; i <= a; i++) {
	//		if (i % 3 == 0) {
	//			cout << i << endl;
	//		}
	//	}
	//}
	
	//zad12
	float n;
	cin >> n;
	float suma = 0;
	float liczba;

	for (int i = 0; i < n; i++) {
		cin >> liczba;
		suma += liczba;
	}
	float srednia = suma / n;
	cout << srednia << endl;

}

