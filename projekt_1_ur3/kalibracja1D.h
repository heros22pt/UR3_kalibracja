#pragma once
#include "kalibracja.h"
class kalibracja1D :public kalibracja
{
public:
	kalibracja1D();

	void kalibruj(punkt pkt);
	vector<punkt> transformuj(); //ma za zadanie transformowac w sumie z kontami okreslajacym polozenie pkt 2d

	~kalibracja1D();
};

