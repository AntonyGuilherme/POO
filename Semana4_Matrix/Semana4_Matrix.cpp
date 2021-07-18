//
// Created by Gabriel on 24/06/2021.
//

// matrix.cpp
#include "Semana4_Matrix.h"

// contrutor default - cria uma matriz vazia com nRows = nCols = 0
Matrix::Matrix(){
    this->m=new double* [0];
    this->m[0]=new double [0];
}

// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e
// com todos os elementos iguais a 0.0 (double)
Matrix::Matrix(int rows, int cols, const double &value):nRows(rows), nCols(cols){

    this->m=new double* [this->getRows()];

    for (int i = 0; i < this->getRows(); i++) {
        this->m[i]=new double [this->getCols()];
    }

    for (int i = 0; i < this->getRows(); i++) {
        for (int j = 0; j < this->getCols(); j++) {
            this->m[i][j]=value;
        }
    }
}

// contrutor parametrico 2 - cria uma matriz com os dados fornecidos pelo arquivo texto myFile.
//Matrix::Matrix(std::fstream &myFile){

//}


// contrutor de copia
Matrix::Matrix(const Matrix& that):nRows(that.getRows()), nCols(that.getCols()){

    this->m=new double* [this->getRows()];

    for (int i = 0; i < this->getRows(); i++) {
        this->m[i]=new double [this->getCols()];
    }

    for (int i = 0; i < this->getRows(); i++) {
        for (int j = 0; j < this->getCols(); j++) {
            this->m[i][j]=that.get(i,j);
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
int Matrix::getRows() const { return this->nRows; }

// obtem o numero de colunas
int Matrix::getCols() const { return this->nCols; }


// obtem um elemento específico na posição (row,col). Obs: deve checar consistencia
double Matrix::get(int row, int col) const {

    if(row >= 0 && row < this->getRows() && col >= 0 && col < this->getCols()){
        return this->m[row][col];
    }
    throw "Invalid element.";
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

// faz com que a matriz torne-se uma matriz identidade
void Matrix::unit(){
    for (int i = 0; i < this->getRows(); i++) {
        for (int j = 0; j < this->getCols(); j++) {

            if (i == j) {
                this->m[i][j] = 1.0;
                break;
            }
            this->m[i][j] = 0.0;
        }
    }
}

// faz com que a matriz torne-se uma matriz nula
void Matrix::zeros(){
    for (int i = 0; i < this->getRows(); i++) {
        for (int j = 0; j < this->getCols(); j++) {
            this->m[i][j] = 0.0;
        }
    }
}

// faz com que a matriz torne-se uma matriz cujos elementos sao iguaia a 1
void Matrix::ones(){
    for (int i = 0; i < this->getRows(); i++) {
        for (int j = 0; j < this->getCols(); j++) {
            this->m[i][j] = 1.0;
        }
    }
}