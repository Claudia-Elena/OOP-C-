#include"CDreapta.h"
#include<math.h>
CDreapta::CDreapta():CPunct(),p1()
{

}
CDreapta::~CDreapta()
{

}
CDreapta::CDreapta(float x1, float y1, float x2, float y2) :CPunct(x1, y1), p1(x2, y2)
{
	
}

float  CDreapta::getDreapta(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}