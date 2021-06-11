//
// Created by word2 on 10/06/2021.
//

// matrix.cpp
#include "matrix.h"

// contrutor default - cria uma matriz vazia com nRows = nCols = 0
Matrix::Matrix(): nCols(0), nRows(0){
    this->m=new double* [0];
    this->m[0]=new double [0];
}

// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e
// com todos os elementos iguais a elem (double)
Matrix::Matrix(int rows, int cols, double elem): nCols(cols), nRows(rows){

    this->m=new double* [rows];

    for (int i = 0; i < this->getRows(); i++) {
        m[i]=new double [this->getCols()];
    }

    for (int i = 0; i < this->getRows(); i++) {
        for (int j = 0; j < this->getCols(); j++) {
            this->m[i][j]=elem;
        }
    }
}

// destrutor
Matrix::~Matrix() {
    for (int i = 0; i < this->getRows(); i++) {
        delete [] this->m[i];
    }
    delete [] this->m;
}

// obtem o numero de linhas
int Matrix::getRows() const {
   return this->nRows;
}

// obtem o numero de colunas
int Matrix::getCols() const {
   return this->nCols;
}

// retorna uma matriz transposta
Matrix Matrix::transpose() {

    if(this->getCols() && this->getRows()){
        return * new Matrix(this->getCols(), this->getRows(), this->m[0][0]);
    }

    Matrix _matrix_no_value;
    return _matrix_no_value;

}

// imprime o conteudo da matriz
void Matrix::print() const {

    for (int i = 0; i < this->getRows(); i++) {
        std::cout << std::endl;

        for (int j = 0; j < this->getCols(); j++) {
            std::cout << this->m[i][j] << " ";
        }
    }
}