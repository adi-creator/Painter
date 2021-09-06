/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

#pragma once
#include "MyShape.h"
class MyEllipse :
	public MyShape
{
public:
	DECLARE_SERIAL(MyEllipse)
	MyEllipse(void);
	~MyEllipse(void);
	int getId();
	void innerDraw(CDC *dc);
};

