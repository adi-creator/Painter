/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

#pragma once
#include "ShapeFactory.h"
#include "MyRectangle.h"

class RectangleFactory :
	public ShapeFactory
{
public:	
	~RectangleFactory(void);
	MyShape* createShape()
	{
		return new MyRectangle();
	}
	static RectangleFactory* getInstance() {
		static RectangleFactory instance;
		return &instance;
	}
private:
	RectangleFactory(void);
};

