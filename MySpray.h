/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

#pragma once
#include "MyShape.h"
#include <vector>
using namespace std;
class MySpray :
	public MyShape
{
public:
	DECLARE_SERIAL(MySpray)
	MySpray(void);
	~MySpray(void);
	int getId();
	void innerDraw(CDC *dc);
	void addPoints();
	CPoint randomPixel;
private:
	vector<int> deltaX;
	vector<int> deltaY;
};
