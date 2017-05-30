#pragma once
#include "kalibracja.h"
class kalibracja3D :
	public kalibracja
{
public:
	kalibracja3D();

	void kalibruj(punkt &pkt1, punkt &pkt2, punkt &pkt3);


	~kalibracja3D();
};

