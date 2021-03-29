#include<iostream>
#include "CCaine.h"
using namespace std;

void CCaine::Citire()
{
	cout << "Numele : " ;
	cin >> nume;
	cin.get();
	cout << "Inaltime (in cm): " ;
	cin >> inaltime;
	cout << "Greutate(in kg): " ;
	cin >> greutate;
	cout << "Varsta(in ani): " ;
	cin >> varsta;
	cout << "Culoare: " ;
	cin >> culoare;
	cin.get();
}

void CCaine::Afisare()
{
	cout << "Numele : " << nume << endl;;
	cout << "Inaltimea : " << inaltime << endl;
	cout << "Greutatea : " << greutate << endl;
	cout << "Varsta : " << varsta << endl;
	cout << "Culoare: " << culoare << endl;
}
