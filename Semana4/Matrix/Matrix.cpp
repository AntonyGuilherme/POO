//
// Created by Gabriel on 24/06/2021.
//

// matrix.cpp
#include "Matrix.h"

// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e preenchida com "value"
Matrix::Matrix(int rows, int cols, const double &value) : nRows(rows), nCols(cols) {

    //alocando a memoria
    this->memmoryAlloc();

    //preenchendo a matriz com o valor informado
    this->fillMatrix(value);
}


// contrutor de copia
Matrix::Matrix(const Matrix &that) : nRows(that.getRows()), nCols(that.getCols()) {

    //alocando a memoria
    memmoryAlloc();

    //preenchendo a memoria com os mesmos elementos da matriz a ser copiada
    for (int i = 0; i < this->getRows(); i++)
        for (int j = 0; j < this->getCols(); j++)
            this->m[i][j] = that.get(i, j);

}

// destrutor
Matrix::~Matrix() {

    //Desalocando a memoria

    for (int i = 0; i < this->getRows(); i++) {
        delete[] this->m[i];
    }
    delete[] this->m;
}

// obtem o numero de linhas
int Matrix::getRows() const { return this->nRows; }

// obtem o numero de colunas
int Matrix::getCols() const { return this->nCols; }

// obtem um elemento específico na posição (row,col). Obs: deve checar consistencia
double Matrix::get(int &row, int &col) const {

    if (row >= 0 && row < this->getRows() && col >= 0 && col < this->getCols()) {
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
void Matrix::unit() {

    if (this->getCols() != this->getRows()) throw "Invalid operation";

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
void Matrix::zeros() {
    return this->fillMatrix(0.0);
}

// faz com que a matriz torne-se uma matriz cujos elementos sao iguaia a 1
void Matrix::ones() {
    return this->fillMatrix(1.0);
}

// contrutor parametrico 2 - cria uma matriz com os dados fornecidos pelo arquivo texto myFile.
Matrix::Matrix(std::ifstream &myFile) {

    //verificando a existencia do arquivo informado
    if (!myFile)
        throw "file not founded";

    //variável que vai receber os valores do arquivo
    double input_number;

    // contadores de execucao, coluna e linha , respectivamente.
    int count = 0, count_column = 0, count_row = 0;

    //iterando pelos elementos do arquivo
    while (myFile >> input_number) {

        //informando o numero de linhas
        if (count == 0) this->nRows = (int) input_number;

            // informando o numero de colunas e alocando a memoria
        else if (count == 1) {
            this->nCols = (int) input_number;

            //alocando a memoria
            this->m = new double *[this->getRows()];

            for (int i = 0; i < this->getRows(); i++) {
                this->m[i] = new double[this->getCols()];
            }

        } else {

            //caso o numero de linhas informadas ja tenha sido ultrapassado
            // os numeros em seguida sao desconsiderados
            if (this->getRows() <= count_row) break;

            //preenchendo a matriz
            this->m[count_row][count_column] = input_number;

            //incrementando a coluna
            count_column++;

            //incrementando o numero de linhas caso a linha anterior já tenha sido preenchida
            if ((count_column >= this->getCols())) {
                count_column = 0;
                count_row++;
            }

        }

        //incrementando o contador de controle
        count++;
    }

    //fechando o arquivo
    myFile.close();


}

void Matrix::fillMatrix(const double &element) {

    for (int i = 0; i < this->getRows(); i++)
        for (int j = 0; j < this->getCols(); j++)
            this->m[i][j] = element;

}

void Matrix::memmoryAlloc() {

    this->m = new double *[this->getRows()];

    for (int i = 0; i < this->getRows(); i++) {
        this->m[i] = new double[this->getCols()];
    }

}


