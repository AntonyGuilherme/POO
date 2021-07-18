//
// Created by Gabriel on 24/06/2021.
//

#ifndef UNTITLED_SEMANA4_MATRIZ_H
#define UNTITLED_SEMANA4_MATRIZ_H

// matrix.h (header file)

#include <iostream>
#include <fstream>

class Matrix {

    double** m; // m é um array 2D a ser implementado como um pointer de pointers
    int nRows;  // numero de linhas
    int nCols;  //  numero de colunas

public:

    // Construtores
    Matrix();
    Matrix(int rows, int cols, const double &value = 0.0);
    //Matrix(std::ifstream &myFile);
    Matrix(const Matrix& that);

    // destrutor
    ~Matrix();

    // basic getters
    int getRows() const;
    int getCols() const;
    double get(int row, int col) const;

    // other methods
    void print() const;
    void unit();
    void zeros();
    void ones();

};

#endif //UNTITLED_SEMANA4_MATRIZ_H
