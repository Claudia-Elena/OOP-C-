#include"CCaine.h"
#include"CCaineCuPete.h"
#include"CaineFaraPete.h"
#include<iostream>

#define _CRT_SECURE_NO_WARNINGS

int nr_caini_cu_pete=0,nr_caini=0;
using namespace std;

int main()
{
	CCaine caine[100];
	CCaineCuPete pete[50],c[100];
	cout << "Introduceti nr caini fara pete: " << endl;
	cin >> nr_caini;
	cout << "Introduceti nr caini cu pete: " << endl;
	cin >> nr_caini_cu_pete;
	
	int choice;
	do
	{
		cout << endl;
		cout << "\n\5 1.Citeste  caini fara pete: " << endl;
		cout << "\n\5 2.Citeste  caini cu pete: " << endl;
		cout << "\n\5 3.Afiseaza caini fara pete " << endl;
		cout << "\n\5 4.Afiseaza caini cu pete " << endl;
		cout << "\n\5 5.Afiseaza caini cu pete si fara pete" << endl;
		cout << "\n\5 6.Exit" << endl;
		cout << endl;
		cin >> choice;
		cout << endl;
		

		switch (choice)
		{
		case 1:
			cout << endl;

			for (int i = 0; i < nr_caini; i++)
			{
				caine[i].Citire();
				cout << endl;
			}
			break;
		case 2:
			cout << endl;

			for (int i = 0; i < nr_caini_cu_pete; i++)
			{
				c[i].Citire();
				pete[i].Citire_nr_pete();
				cout << endl;
			}
			break;
		case 3:
			for (int i = 0; i < nr_caini; i++)
			{
				caine[i].Afisare();
			}
			break;
		case 4:
			for (int i = 0; i < nr_caini_cu_pete; i++)
			{
				c[i].Afisare();
				pete[i].Afisare_nr_pete();
			}
			break;
		case 5:
			cout << "**************Caini fara pete ****************";
			for (int i = 0; i < nr_caini; i++)
			{
				cout <<endl;
				caine[i].Afisare();
				
			}
			cout << "**************Caini cu pete ****************";
			for (int i = 0; i < nr_caini_cu_pete; i++)
			{
				cout <<endl;
				c[i].Afisare();
				pete[i].Afisare_nr_pete();
				
			
			}
			break;
		case 6:
			 exit(1);
		}
	} while (1);
}
