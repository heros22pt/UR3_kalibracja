//Kalibracja
//Zadania :
//1.	Odbieranie sygna³ów po³o¿enia robota – potrzebne 3 wspó³rzêdne
//2.	Utworzenie w³asnego uk³adu wspolrzednych dla robota
//3.	Zamienienia wspó³rzêdnych wprowadzanych na wspó³rzêdne koñca ramienia robota
//
//Pogl¹dowa Klasa(plik nag³ówkowy, metody) :
#include ”*.h”
#include<vector>
using namespace std;
struct punkt
{
	float x, y, z;
};
struct punktTCP
{
	float tab[6];//x,y,z,orient1-3
};
class cKalibracja //:public QObject //macro i w qt
{
	//definicja
protected:

	vector<punkt> punkty;

	//metody
public:
	void pobierz_punkt(); //ma pobrac punkt i dodac go do vector<punkt> punkty
	virtual vector<punkt> transformuj() = 0;
public slots:
void TCPpose(punktTCP punkt);
}
//		//void getter_wspolrzedna_1(float x, float y, float z);
///*ok*/	punkt getter_wspolrzedna(/*const punkt &punkt_odniesienia*/); //pobiera wzpolrzedna od robota.. jeden pobiera 3 punkty po kolei... ogolny do wszystkich.. pobiera i zwraca punkt
//		void ustaw_punkt_dla_robota(const punkt &punkt_w_ktore_ma_byc_przesuniety); //za pomoca utworzonej macierzy transformacji przeksztalca punkt z macierzy robota na macierz np. kartki
//
//		punkt callback_punkt(); //za pomoca tego call backa ma byc odeslany przetworzony punkt
//
//		void kalibruj(punkt &p1, punkt &p2, punkt &p3); // funkcja glowna majaca stworzyc macierz transformacji... ale nie w tej formie
//
//		void kalibtuj(punkt a = getter_wspolrzedna()) //lepsz wersja tego co wyzej, ale cos nie tak///
//
///*ok +/-*/float przetwarzanie_wzgledem_x();  //ta funkcja czegos potrzebuje, chyba nowego punktu
//		float przetwarzenie_wzgledem_y();
//		float przetwarzanie_wzgledem_z();
//
//		//potrzebny setter ustawiajacy punkty
///*ok*/	void setter_ustaw_wspolrzedne()
//		{
//			//punkt pt1 = getter_wspolrzedna(); //pomiedzy czas na przestawienie robota zapisany w funkcji getter
//			//punkt pt2 = getter_wspolrzedna();
//			//punkt pt3 = getter_wspolrzedna();
//
//			this->pkt_1 = getter_wspolrzedna();
//			this->pkt_2 = getter_wspolrzedna();
//			this->pkt_3 = getter_wspolrzedna();
//		} // nie wiem czy ze wzgledu na to, ze projekt ma byc robiony za pomaca QT i utworzone okno wizard, ustawianie punktow nie powinno byc osobnym setterem dla kazdego
//	};


	//potrzebujemy wczytaæ 3 pukty
	//	stworzyæ algorytm w oparciu o te 3 punkty
	//	przetwarzac kazdy podany punkt na punkty nowe punkty wzglêdem