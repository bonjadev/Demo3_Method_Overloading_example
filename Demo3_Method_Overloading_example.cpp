// Demo3_Method_Overloading_example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int MojaFunkcija(int x, int y) {
	return x + y;
}

double MojaFunkcija(double x, double y) {
	return x + y;
}

int main() {
	int mojBroj1 = MojaFunkcija(9, 6);
	double mojBroj2 = MojaFunkcija(8.1, 6.2);
	cout << "Int: " << mojBroj1 << "\n";
	cout << "Double: " << mojBroj2;
	return 0;
}
