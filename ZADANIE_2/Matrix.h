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

	//ustawianie wartoœci na podanym indeksie
	void insertValue(int kolumna, int wiersz, double value);

	//pobieranie wartoœci z kolumny. Próba pobrania wartoœci spoza tablicy bêdzie zwracaæ wartoœæ 0.
	double getValue(int kolumna, int wiersz); 

	//metoda zwracaj¹ca informacjê, czy wyst¹pi³ jakiœ b³¹d (próba dostania siê poza zakres tablicy)
	bool fail();

	//wyzerowywanie flagi b³êdu
	void resetFail();

	//metoda ustawiaj¹ca losowe wartoœci w tablicy.
	void rand();
};

