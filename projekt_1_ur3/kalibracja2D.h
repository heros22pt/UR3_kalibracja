#pragma once
#include "kalibracja.h"
struct punkt2D
	{
		float wspolrzedna_x;
		float wspolrzedna_y;
	};
class kalibracja2D :
	public cKalibracja
{
public:
	kalibracja2D();
	

protected:
	void kalibruj(vector<punkt> pkt);

	/* zadanie kalibruj: po pobraniu punktow od robota, uzytkownik musi okreslic jakie sa to punkty. tzn np. robot da nam znac ¿e ma punkty A=(154,279,148) a my chcemy, on to interpretowal jako poczatek ukladu wspolrzednych, czy w tym przypadku jako poczatek lini klawiatury czyli punkt A'=(0,0,0).
	*/
	
public:
	void kalibruj();
	//vector<punkt> transformuj(punkt2D pkt1, punkt pkt2);
	vector<punktTCP> transformuj(vector<punktTCP> wektor);
	/*Po podaniu punktu wg skali podanej w transformuj ta funkcja ma za zadanie podany punkt zamienic na punkt wg skali robota .
	np. mam podane 2 punkty
	A=(124,265,311) A'=(0,0)
	B=(248,268,411) B'=(1,0)
	i uzytkownik poda ze chce sie przeniesc do punktu C'=(0.32,0). 
	zadaniem tego modulu bedzie okreslenie punktu C i zwrocenie go.
	*/


	~kalibracja2D();
private:
	punktTCP P0;//wspolrzedne robota
	punkt vx;
	punkt vz;
};

