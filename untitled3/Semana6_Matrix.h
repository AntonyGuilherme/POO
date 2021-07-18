//
// Created by word2 on 02/07/2021.
//

#ifndef SEMANA6_MATRIX_MATRIX_H
#define SEMANA6_MATRIX_MATRIX_H

#include <iostream>
#include <fstream>

//template <class TValor> class Matrix;

//template <class TValor>
//std::ostream& operator<<(std::ostream&, const Matrix<TValor>&);

template <class TValor>
class Matrix {

    TValor **m; // m é um array 2D a ser implementado como um pointer de pointers
    int nRows;  // numero de linhas
    int nCols;  //  numero de colunas
    void fillMatrix(const TValor& valor);

    void memmoryAlloc();

public:

    // Construtores
    Matrix<TValor>(int rows = 1, int cols = 1, const TValor& value = 0);
    Matrix<TValor>(std::ifstream &myFile);
    Matrix<TValor>(const Matrix<TValor> &that);

    // destrutor
    ~Matrix<TValor>();

    // basic getters
    inline int getRows() const;
    inline int getCols() const;

    TValor& get(int &row, int &col) const;

    // other methods
    void print() const;
    void unit();
    void zeros();
    void ones();

    TValor& operator() (int,int) const;
    Matrix<TValor>& operator+ (const Matrix<TValor>&) const;
    void operator-= (const Matrix<TValor>&);
    Matrix<TValor>& operator- (const Matrix<TValor>&) const;
    void operator+= (const Matrix<TValor>&);
    Matrix<TValor>& operator~ () const;
    void operator *= (int);
    Matrix<TValor>& operator* (const Matrix<TValor>&) const;
    void operator *= (const Matrix<TValor>&);
    bool operator == (const Matrix<TValor>&) const;
    bool operator != (const Matrix<TValor>&) const;
    friend std ::istream& operator>>(std::istream&,Matrix<TValor>&);
    friend std ::ostream& operator<<(std::ostream&,const Matrix<TValor>&);
};


#endif //SEMANA5_MATRIX_MATRIX_H
