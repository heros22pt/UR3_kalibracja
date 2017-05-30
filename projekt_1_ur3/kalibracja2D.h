#pragma once
#include "kalibracja.h"
class kalibracja2D :
	public kalibracja
{
public:
	kalibracja2D();
	
	punkt kalibruj(punkt pkt);
	vector<punkt> transformuj();



	~kalibracja2D();
};

