#include"CPatrat.h"
#include"CDreapta.h"
#include"CPunct.h"
#include<iostream>
using namespace std;
CPatrat::CPatrat() :CPunct(), punct1()
{

}
CPatrat::~CPatrat()
{

}
CPatrat::CPatrat(float x1, float y1, float x2, float y2) :CPunct(x1, y1), punct1(x2, y2)
{

}
float CPatrat::getPerimetruPatrat(float x1, float y1, float x2, float y2)
{
	cout << "\nLatura patratului=" << getLatura(x1, y1, x2, y2) << endl;
	return 4 * getLatura(x1,y1, x2, y2);
}
float CPatrat::getAriePatrat(float x1, float y1, float x2, float y2)
{
	
	return getLatura(x1, y1, x2, y2) *getLatura(x1, y1, x2, y2);
}
float CPatrat::getLatura(float x1, float y1, float x2, float y2)
{
	return latura.getDreapta(x1, y1, x2, y2);
}