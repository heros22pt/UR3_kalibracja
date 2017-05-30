#pragma once
#include "kalibracja.h"
class kalibracja1D :public cKalibracja
{
public:
	kalibracja1D();
	


	void kalibruj(punkt pkt);
	~kalibracja1D();
};

