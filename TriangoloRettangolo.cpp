// Tonsuso Michael, 3A inf, 29/08/2023
// Letti i valori dell'ipotenusa e di un cateto di un triangolo rettangolo, ci calcoliamo la lunghezza dell'altro cateto, il perimetro e l'area del triangolo.

#include <iostream>
#include <math.h> // libreria per utilizzare la radice quadrata sqrt()
using namespace std;


class TriangoloRettangolo {
	public:
		double ipotenusa, cateto1, cateto2;

		// funzione per l'inserimento dei valori;
		void InserimentoValori() {
			cout << "Inserisci l'ipotenusa: ";
			cin >> ipotenusa;
			cout << "Inserisci il cateto1: ";
			cin >> cateto1;
		};

		// funzione per calcolare il cateto2
		double CalcoloCateto2() {
			return sqrt((ipotenusa * ipotenusa) - (cateto1 * cateto1) );
		};
		// funzione per calcolare il perimetro
		double CalcoloPerimetro() {
			cateto2 = CalcoloCateto2(); // prima di calcolare il perimetro abbiamo bisogno di calcolare il cateto2
			return (ipotenusa + cateto1 + cateto2);
		};
		// funzione per calcolare l'area
		double CalcoloArea() {
			cateto2 = CalcoloCateto2(); // prima di calcolare l'area abbiamo bisogno di calcolare il cateto2
			return (cateto1 * cateto2) / 2;
		};
};


int main()
{

	// creiamo l'oggetto myTriangolo della classe TriangoloRettangolo e gli assegniamo i parametri
	TriangoloRettangolo myTriangolo;

	// chiamiamo la funzione per l'inserimento dei dati
	myTriangolo.InserimentoValori();

	// Stampiamo tutti i valori
	cout << "Il cateto2 misura: " << myTriangolo.CalcoloCateto2() << "\n";
	cout << "Il perimetro misura: " << myTriangolo.CalcoloPerimetro() << "\n";
	cout << "L'area misura: " << myTriangolo.CalcoloArea();

	return 0;

}

