#pragma once


class Matrix
{
	int kolumna;
	int wiersz;
	double** matrix;
	bool errorFlag = false;

public:

	Matrix(int kolumna, int wiersz);
	~Matrix();
	Matrix(Matrix& matrix);

	//ustawianie warto�ci na podanym indeksie
	void insertValue(int kolumna, int wiersz, double value);

	//pobieranie warto�ci z kolumny. Pr�ba pobrania warto�ci spoza tablicy b�dzie zwraca� warto�� 0.
	double getValue(int kolumna, int wiersz); 

	//metoda zwracaj�ca informacj�, czy wyst�pi� jaki� b��d (pr�ba dostania si� poza zakres tablicy)
	bool fail();

	//wyzerowywanie flagi b��du
	void resetFail();

	//metoda ustawiaj�ca losowe warto�ci w tablicy.
	void rand();
};

