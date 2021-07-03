//
// Created by word2 on 02/07/2021.
//

#ifndef SEMANA5_MATRIX_MATRIX_H
#define SEMANA5_MATRIX_MATRIX_H


#include <iostream>
#include <fstream>

class Matrix {

    double **m; // m é um array 2D a ser implementado como um pointer de pointers
    int nRows;  // numero de linhas
    int nCols;  //  numero de colunas
    void fillMatrix(const double &element);

    void memmoryAlloc();

public:

    // Construtores
    Matrix(int rows = 1, int cols = 1, const double &value = 0.0);

    Matrix(std::ifstream &myFile);

    Matrix(const Matrix &that);

    // destrutor
    ~Matrix();

    // basic getters
    inline int getRows() const;

    inline int getCols() const;

    double& get(int &row, int &col) const;

    // other methods
    void print() const;

    void unit();

    void zeros();

    void ones();

    double& operator() (int,int) const;
    Matrix& operator+ (const Matrix&) const;
    void operator-= (const Matrix&);
    Matrix& operator- (const Matrix&) const;
    void operator+= (const Matrix&);
    Matrix& operator~ () const;
    void operator *= (int);
    Matrix& operator* (const Matrix&) const;
    void operator *= (const Matrix&);




};


#endif //SEMANA5_MATRIX_MATRIX_H
