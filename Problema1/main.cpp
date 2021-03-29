#include<iostream>
#include"CPunct.h"
#include"CDreapta.h"
#include"CCerc.h"
#include"CPatrat.h"
#include"CDreptunghi.h"
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3, x4, y4;
	CPunct punct1;

	cout << "\nIntroduceti coordonata x1=";
	cin >> x1;
	cout << "\nIntroduceti coordonata y1=";
	cin >> y1;
	cout << "\nIntroduceti coordonata x2=";
	cin >> x2;
	cout << "\nIntroduceti coordonata y2=" ;
	cin >> y2;
	CDreapta dreapta1;
	cout << "Lungimea dreptei AB=" << dreapta1.getDreapta(x1, y1, x2, y2) << endl;


	cout << "\nIntroduceti coordonatele razei x1=";
	cin >> x1;
	cout << "\nIntroduceti coordonatele razei y1=";
	cin >> y1;
	cout << "\nIntroduceti coordonatele razei x2=";
	cin >> x2;
	cout << "\nIntroduceti coordonatele razei y2=";
	cin >> y2;
	CCerc cerc;
	cout << "Perimetrul cercului=" << cerc.getPerimetruCerc(x1, y1, x2, y2) << endl;
	cout<<"Aria cercului ="<<cerc.getArieCerc(x1, y1, x2, y2) << endl;

	cout << "\nIntroduceti coordonata laturii patratului x1=";
	cin >> x1;
	cout << "\nIntroduceti coordonata laturii patratului y1=";
	cin >> y1;
	cout << "\nIntroduceti coordonata laturii patratului x2=";
	cin >> x2;
	cout << "\nIntroduceti coordonata laturii patratului y2=";
	cin >> y2;
	CPatrat patrat;
	cout << "Perimetrul patratului este =" << patrat.getPerimetruPatrat(x1, y1, x2, y2) << endl;
	cout << "Aria patratului este =" << patrat.getAriePatrat(x1, y1, x2, y2) << endl;

	cout << "\nIntroduceti coordonata latimii dreptunghiului x1=";
	cin >> x1;
	cout << "\nIntroduceti coordonata latimii dreptunghiului y1=";
	cin >> y1;
	cout << "\nIntroduceti coordonata latimii dreptunghiului x2=";
	cin >> x2;
	cout << "\nIntroduceti coordonata latimiii dreptunghiului y2=";
	cin >> y2;
	cout << "\nIntroduceti coordonata lungimii dreptunghiului x3=";
	cin >> x3;
	cout << "\nIntroduceti coordonata lungimii dreptunghiului y3=";
	cin >> y3;
	cout << "\nIntroduceti coordonata lungimii dreptunghiului x4=";
	cin >> x4;
	cout << "\nIntroduceti coordonata lungimii dreptunghiului y4=";
	cin >> y4;
	CDreptunghi dreptunghi;
	cout << "\nPerimetrul dreptunghiului =" << dreptunghi.getPerimetruDreptunghi(x1, y1, x2, y2, x3, y3, x4, y4)<<endl;
	cout << "\nAria dreptunghiului =" << dreptunghi.getArieDreptunghi(x1, y1, x2, y2, x3, y3, x4, y4 )<<endl;

}