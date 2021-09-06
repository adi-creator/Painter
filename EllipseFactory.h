/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

#pragma once
#include "ShapeFactory.h"
#include "MyEllipse.h"

class EllipseFactory :
	public ShapeFactory
{
public:	
	~EllipseFactory(void);
	MyShape* createShape() { return new MyEllipse(); }
	static EllipseFactory* getInstance() {
		static EllipseFactory* instance = new EllipseFactory();
		return instance;
	}
private:
	EllipseFactory(void);
};

