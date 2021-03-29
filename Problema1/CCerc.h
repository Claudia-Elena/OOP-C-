#pragma once
#include"CPunct.h"
#include"CDreapta.h"
class CCerc :public CPunct ,  CDreapta
{
private:
	CPunct c1;
	CDreapta raza;
public:
	
	CCerc();
	~CCerc();
	CCerc(float x1, float y1, float x2, float y2);
	float getPerimetruCerc(float x1, float y1, float x2, float y2);
	float getArieCerc(float x1, float y1, float x2, float y2);
	float getRaza(float x1, float y1, float x2, float y2);

};