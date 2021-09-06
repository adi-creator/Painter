/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

// paint_pro.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpaint_proApp:
// See paint_pro.cpp for the implementation of this class
//

class Cpaint_proApp : public CWinApp
{
public:
	Cpaint_proApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cpaint_proApp theApp;