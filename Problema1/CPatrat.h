#pragma once
#include"CPunct.h"
#include"CDreapta.h"
class CPatrat :public CPunct, CDreapta
{
private:
	CPunct punct1;
	CDreapta latura;
public:
	
	CPatrat();
	~CPatrat();
	CPatrat(float x1, float y1, float x2, float y2);
	float getPerimetruPatrat(float x1, float y1, float x2, float y2);
	float getAriePatrat(float x1, float y1, float x2, float y2);
	float getLatura(float x1, float y1, float x2, float y2);

};