/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

#pragma once

#include "MyShape.h"

class ShapeFactory // abstract class to get the serial of our shape and creating it
{
public:
	ShapeFactory(void);
	~ShapeFactory(void);
	virtual MyShape* createShape() = 0; 
};