//
// Created by word2 on 10/06/2021.
//

// matrix.cpp
#include "matrix.h"

// contrutor default - cria uma matriz vazia com nRows = nCols = 0
Matrix::Matrix(){
   // ...
}


// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e
// com todos os elementos iguais a elem (double)
Matrix::Matrix(int rows, int cols, double elem){
    //...
}


// destrutor
Matrix::~Matrix() {
   // ...
}


// obtem o numero de linhas
int Matrix::getRows() const {
   // ...
}

// obtem o numero de colunas
int Matrix::getCols() const {
   // ...
}

// retorna uma matriz transposta
Matrix Matrix::transpose() {
   // ...
}

// imprime o conteudo da matriz
void Matrix::print() const {
   // ...
}