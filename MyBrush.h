/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

#pragma once
#include "MyShape.h"
class MyBrush :
	public MyShape
{
public:
	DECLARE_SERIAL(MyBrush)
	MyBrush(void);
	~MyBrush(void);
	int getId();
	void innerDraw(CDC *dc);
};

