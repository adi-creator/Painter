/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

#pragma once
#include "MyShape.h"
class MyLine :
	public MyShape
{
public:
	DECLARE_SERIAL(MyLine)
	MyLine(void);
	~MyLine(void);
	int getId();
	void draw(CDC *dc);
};

