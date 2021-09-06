/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

#pragma once
#include "ShapeFactory.h"
#include "MyLine.h"

class LineFactory :
	public ShapeFactory
{
public:	
	~LineFactory(void);
	MyShape* createShape() { return new MyLine(); }
	static LineFactory* getInstance() {
		if (instance == 0)
			instance = new LineFactory();
		return instance;
	}
private:
	LineFactory(void);
	static LineFactory *instance;
};

