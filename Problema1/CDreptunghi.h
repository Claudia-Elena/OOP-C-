#pragma once
#include"CPunct.h"
#include"CDreapta.h"
class CDreptunghi :public CPunct, CDreapta
{
private:
	CPunct pct1,pct2,pct3;
	CDreapta latime,lungime;
public:

	CDreptunghi();
	~CDreptunghi();
	CDreptunghi(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
	float getPerimetruDreptunghi(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
	float getArieDreptunghi(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
	float getLatime(float x1, float y1, float x2, float y2);
	float getLungime(float x1, float y1, float x2, float y2);

};