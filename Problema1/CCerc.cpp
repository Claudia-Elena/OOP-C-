#include"CCerc.h"
#include"CDreapta.h"
#include"CPunct.h"
#include<iostream>
using namespace std;
CCerc::CCerc():CPunct(), c1()
{

}
CCerc::~CCerc()
{

}
CCerc::CCerc(float x1, float y1, float x2, float y2) :CPunct(x1, y1), c1(x2, y2)
{

}
float CCerc::getPerimetruCerc(float x1, float y1, float x2, float y2)
{
	cout << "\nraza cercului =" << getRaza(x1, y1, x2, y2) << endl;
	return 2 * 3.14 * getRaza(x1, y1,x2,y2);
}
float CCerc::getArieCerc(float x1, float y1, float x2, float y2)
{
	return 3.14* getRaza(x1, y1, x2, y2)* getRaza(x1, y1, x2, y2);
}
float CCerc::getRaza(float x1, float y1, float x2, float y2)
{
	return raza.getDreapta(x1,y1,x2,y2);
}