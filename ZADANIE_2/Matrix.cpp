#include "Matrix.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


Matrix::Matrix(int kolumna, int wiersz): kolumna(kolumna),wiersz(wiersz), errorFlag(false)
{
	matrix = new double* [wiersz];
	for (int i = 0; i < wiersz; i++)
	{
		matrix[i] = new double[kolumna];
	}
}

Matrix::~Matrix()
{
	for (int i = 0; i < kolumna; i++) 
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

Matrix::Matrix(Matrix& matrix2) : kolumna(matrix2.kolumna),wiersz(matrix2.wiersz)
{
	matrix = new double* [wiersz];

	for (int i = 0; i < wiersz; i++) 
	{
		matrix[i] = new double[kolumna];
		for (int j = 0; j < kolumna; j++) 
		{
			matrix[i][j] = matrix2.matrix[i][j];
		}
	}

}

void Matrix::insertValue(int kolumna, int wiersz, double value)
{
	if (kolumna >= 0 && wiersz >= 0)
	{
		matrix[kolumna][wiersz] = value;
	}
	else
		errorFlag = true;

}

double Matrix::getValue(int kolumna, int wiersz)
{
	if (kolumna < 0 || kolumna >= this->kolumna || wiersz < 0 || wiersz >= this->wiersz)
	{
		errorFlag = true;
		return 0;
	}
	else
	{
		return matrix[kolumna][wiersz];
	}
}

bool Matrix::fail()
{
	return errorFlag;
}

void Matrix::resetFail()
{
	this->errorFlag = false;
}


void Matrix::rand() 
{

	std:srand(static_cast<unsigned>(std::time(nullptr)));

	for (int i = 0; i < kolumna; i++) {
		for (int j = 0; j < wiersz; j++) {
			double losowaWartosc = static_cast<double>(std::rand()) / RAND_MAX;
			matrix[i][j] = losowaWartosc;
		}
	}
}
