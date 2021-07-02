//
// Created by word2 on 25/06/2021.
//

#ifndef SEMANA4_MATRIX_H
#define SEMANA4_MATRIX_H

// matrix.h (header file)

#include <iostream>
#include <fstream>

class Matrix {

    double** m; // m é um array 2D a ser implementado como um pointer de pointers
    int nRows;  // numero de linhas
    int nCols;  //  numero de colunas
    void fillMatrix(const double & element);
    void memmoryAlloc();

public:

    // Construtores
    Matrix(int rows = 1, int cols = 1, const double &value = 0.0);
    Matrix(std::ifstream &myFile);
    Matrix(const Matrix& that);

    // destrutor
    ~Matrix();

    // basic getters
   inline int getRows() const;
   inline int getCols() const;
   double get(int& row, int& col) const;

    // other methods
    void print() const;
    void unit();
    void zeros();
    void ones();

};

#endif //SEMANA4_MATRIX_H
