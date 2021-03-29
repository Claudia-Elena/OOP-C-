#include"CDreptunghi.h"
#include"CDreapta.h"
#include"CPunct.h"
#include<iostream>
using namespace std;

CDreptunghi::CDreptunghi() :CPunct(), pct1(),pct2(),pct3()
{

}
CDreptunghi::~CDreptunghi() 
{

}
CDreptunghi::CDreptunghi(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) :CPunct(x1, y1), pct1(x2, y2), pct2(x3, y3), pct3(x4, y4)
{

}
float CDreptunghi::getPerimetruDreptunghi(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	return 2 * (getLungime(x3, y3, x4, y4) + getLatime(x1, y1, x2, y2));
}
float CDreptunghi::getArieDreptunghi(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	return getLungime(x3, y3, x4, y4) * getLatime(x1, y1, x2, y2);
}
float CDreptunghi::getLatime(float x3, float y3, float x4, float y4)
{
	cout << "\nLatimea Dreptunghiului=" << latime.getDreapta( x3,  y3,  x4, y4);
	return lungime.getDreapta( x3,  y3,x4,  y4);
}
float CDreptunghi::getLungime(float x1, float y1, float x2, float y2)
{  cout<<"\nLungimea Dreptunghiului="<< lungime.getDreapta( x1,  y1,  x2, y2);
	return lungime.getDreapta( x1,  y1,  x2,  y2);
}