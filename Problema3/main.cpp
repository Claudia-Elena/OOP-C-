#include<iostream>
#include"Lista.h"
using namespace std;
int main()
{
	List l;
	int choice;
	
	
	
	do
	{
		cout << "\n 1.Adaugati un element in lista ";
		cout << "\n 2.Stergeti un element din lista ";
		cout << "\n 3.Stergeti elementele din lista mai mici decat o valoare data";
		cout << "\n 4.Calculati media aritmetica a elementelor din lista ";
		cout << "\n 5.Afisati lista de elemente";
		cout << "\n 6.Exit ";
		cout << "\nAlegeti o actiune : ";
		cin >> choice;
		
		switch (choice)
		{
		case 1:
			int nr_elemente;
			cout << "\nIntroduceti numarul de elemente:";
			cin >> nr_elemente;
				for(int i=0;i<nr_elemente;i++)
				{
					int element;
					cout << "\nCititi elementul :";
					cin >> element;
					l.AddNode(element);
				}
				break;
		case 2:
			int delElement;
			cout << "Cititi elementul ce vreti sa fie sters :";
			cin >> delElement;
		    l.DeleteNode(delElement);
			break;
		case 3:
			int elem_referinta;
			cout << "Cititi elementul de comparare : ";
			cin >> elem_referinta;
			for(int i=1;i<elem_referinta;i++)
			{l.DeleteNode(i); }
			break;
		case 4:
			cout<<"Media este = "<<l.Media();
			break;
		case 5:
			l.PrintList();
			break;
		case 6:
			exit(1);
		default:
			break;
		}

	} while (1);

}
