#pragma once
#include"CPunct.h"
class CDreapta :public CPunct
{
private:
	CPunct p1;
public:
	CDreapta();
	~CDreapta();
	CDreapta(float x1, float y1, float x2, float y2);
	float getDreapta(float x1, float y1, float x2, float y2);
};