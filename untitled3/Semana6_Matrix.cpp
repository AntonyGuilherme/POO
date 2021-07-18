//
// Created by word2 on 02/07/2021.
//

#include "Semana6_Matrix.h"

// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e preenchida com "value"
template <class TValor>
Matrix<TValor>::Matrix(int rows, int cols, const TValor& value) : nRows(rows), nCols(cols) {

    //alocando a memoria
    this->memmoryAlloc();

    //preenchendo a matriz com o valor informado
    this->fillMatrix(value);
}

// contrutor de copia
template <class TValor>
Matrix<TValor>::Matrix(const Matrix<TValor>& that) : nRows(that.getRows()), nCols(that.getCols()) {

    //alocando a memoria
    memmoryAlloc();

    //preenchendo a memoria com os mesmos elementos da matriz a ser copiada
    for (int i = 0; i < this->getRows(); i++)
        for (int j = 0; j < this->getCols(); j++)
            this->m[i][j] = that.get(i, j);

}

// destrutor
template <class TValor>
Matrix<TValor>::~Matrix() {

    //Desalocando a memoria

    for (int i = 0; i < this->getRows(); i++) {
        delete[] this->m[i];
    }
    delete[] this->m;
}

// obtem o numero de linhas
template <class TValor>
int Matrix<TValor>::getRows() const { return this->nRows; }

// obtem o numero de colunas
template <class TValor>
int Matrix<TValor>::getCols() const { return this->nCols; }

// obtem um elemento específico na posição (row,col). Obs: deve checar consistencia
template <class TValor>
TValor& Matrix<TValor>::get(int &row, int &col) const {

    if (row >= 0 && row < this->getRows() && col >= 0 && col < this->getCols()) {
        return this->m[row][col];
    }
    throw "Invalid element.";
}

// imprime o conteudo da matriz
template <class TValor>
void Matrix<TValor>::print() const {

    for (int i = 0; i < this->getRows(); i++) {
        std::cout << std::endl;

        for (int j = 0; j < this->getCols(); j++) {
            std::cout << this->m[i][j] << " ";
        }
    }
}

// faz com que a matriz torne-se uma matriz identidade
template <class TValor>
void Matrix<TValor>::unit() {

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
template <class TValor>
void Matrix<TValor>::zeros() {
    return this->fillMatrix(0.0);
}

// faz com que a matriz torne-se uma matriz cujos elementos sao iguaia a 1
template <class TValor>
void Matrix<TValor>::ones() {
    return this->fillMatrix(1.0);
}

// contrutor parametrico 2 - cria uma matriz com os dados fornecidos pelo arquivo texto myFile.
template <class TValor>
Matrix<TValor>::Matrix(std::ifstream &myFile) {

    //verificando a existencia do arquivo informado
    if (!myFile)
        throw "file not founded";

    //variável que vai receber os valores do arquivo
    TValor input_number;

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
            this->m = new TValor *[this->getRows()];

            for (int i = 0; i < this->getRows(); i++) {
                this->m[i] = new TValor[this->getCols()];
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

template <class TValor>
void Matrix<TValor>::fillMatrix(const TValor& element) {

    for (int i = 0; i < this->getRows(); i++)
        for (int j = 0; j < this->getCols(); j++)
            this->m[i][j] = element;

}

template <class TValor>
void Matrix<TValor>::memmoryAlloc() {

    this->m = new TValor *[this->getRows()];

    for (int i = 0; i < this->getRows(); i++) {
        this->m[i] = new TValor[this->getCols()];
    }

}

/*Modificações em relação a atividade anterior
*se encontram desse ponto em diante, que são as implementações
*dos operadores
*/

//Altera o valor de uma posição da matriz
template<class TValor>
TValor &Matrix<TValor>::operator()(int x, int y) const {
    return this->m[x][y];
}

//OPERADORES QUE O RESULTADO É UMA NOVA MATRIZ

//Operador soma (+)
template<class TValor>
Matrix<TValor>& Matrix<TValor>::operator+(const Matrix<TValor>& _matrixAdd) const{

    Matrix *matrix = new Matrix(this->getRows() , this->getCols());

    for(int i =0; i < this->getRows() ; i++)
        for(int j= 0; j<this->getCols() ; j++)
            matrix->m[i][j] = this->get(i,j) + _matrixAdd.get(i,j);

    return  *matrix;
}

//Operador subtração (-)
template<class TValor>
Matrix<TValor>& Matrix<TValor>::operator-(const Matrix<TValor>& _matrixMinus) const {

    Matrix *matrix = new Matrix(this->getRows() , this->getCols());

    for(int i =0; i < this->getRows() ; i++)
        for(int j= 0; j<this->getCols() ; j++)
            matrix->m[i][j] = this->get(i,j) - _matrixMinus.get(i,j);

    return  *matrix;
}

//Operador trasposta (~)
template<class TValor>
Matrix<TValor>& Matrix<TValor>::operator~() const {

    Matrix *matrix = new Matrix(this->getCols() , this->getRows());

    for(int i =0; i < this->getRows(); i++)
        for(int j= 0; j < this->getCols() ; j++)
            matrix->m[j][i] = this->get(i,j) ;

    return  *matrix;
}

//Operador multiplicação (*)
template<class TValor>
Matrix<TValor>& Matrix<TValor>::operator*(const Matrix<TValor>& _matrix) const {

    Matrix *matrix = new Matrix(this->getRows() , _matrix.getCols());

    for(int i =0; i < this->getRows() ; i++){
        for(int j =0; j < _matrix.getCols() ; j++){
            for(int z = 0 ;  z < _matrix.getRows() ; z++){
                matrix->m[i][j] += this->get(j,z) * _matrix.get(z,j);
            }
        }
    }

    return  *matrix;
}

//OPERADORES QUE O RESULTADO É ATRIBUÍDO A MATRIZ DO PARÂMETRO

//Operador multiplicação (*=)
template <class TValor>
void Matrix<TValor>::operator*=(const Matrix<TValor>& _matrix) {

    Matrix *matrix = new Matrix(this->getRows() , _matrix.getCols());

    for(int i =0; i < this->getRows() ; i++){
        for(int j =0; j < _matrix.getCols() ; j++){
            for(int z = 0 ;  z < _matrix.getRows() ; z++){
                matrix->m[i][j] += this->get(j,z) * _matrix.get(z,j);
            }
        }
    }

    *this = *matrix;
}

//Operador subtração (-=)
template<class TValor>
void Matrix<TValor>::operator-=(const Matrix<TValor>& _matrix) {

    for(int i =0; i < this->getRows() ; i++)
        for(int j= 0; j<this->getCols() ; j++)
            this->m[i][j]-= _matrix.get(i,j);

}

//Operador soma (-=)
template <class TValor>
void Matrix<TValor>::operator+=(const Matrix<TValor>& _matrix) {

    for(int i =0; i < this->getRows() ; i++)
        for(int j= 0; j<this->getCols() ; j++)
            this->m[i][j]+= _matrix.get(i,j);
}

//Operador multiplicação por constnte (*=)
template <class TValor>
void Matrix<TValor>::operator*=(int escalar) {

    for(int i =0; i < this->getRows() ; i++)
        for(int j= 0; j<this->getCols() ; j++)
            this->m[i][j] *= escalar;
}

//OPERADORES VERIFICAÇÃO IGUALDADE E DESIGUALDADE

//Operador verificação de igualdade (==)
template <class TValor>
bool Matrix<TValor>::operator==(const Matrix<TValor>& _matrix) const {

    if(this->getCols() != _matrix.getCols() || this->getRows() != _matrix.getRows())
        return false;

    for(int i = 0 ; i < this->getRows() ; i++)
        for(int j = 0 ; j< this->getCols() ; j++)
            if(this->get(i,j) != _matrix.get(i,j))
                return false;

    return true;
}

//Operador verificação de desigualdade (!=)
template<class TValor>
bool Matrix<TValor>::operator!=(const Matrix<TValor>& _matrix) const {

    if(this->getCols() != _matrix.getCols() || this->getRows() != _matrix.getRows())
        return true;

    for(int i = 0 ; i < this->getRows() ; i++)
        for(int j = 0 ; j< this->getCols() ; j++)
            if(this->get(i,j) != _matrix.get(i,j))
                return true;

    return false;
}

//LEITURA E IMPRESSÃO

//Impressão matriz
template <class TValor>
std::istream &operator>>(std::istream & op, Matrix<TValor>& _matrix) {

    std :: cout << "Column's Number"<< std :: endl;
    int _column , _row ;
    op >> _column;
    std :: cout << "Row's Number"<< std :: endl;
    op >> _row;
    std :: cout << "Matrix's Data"<< std :: endl;

    _matrix = * new Matrix<TValor>(_row,_column);

    for(int i = 0 ; i<_row;i++)
        for(int j=0 ; j< _column;j++)
            op >> _matrix.m[i][j];

    return op;
}

//Leitura matriz
template <class TValor>
std::ostream &operator<<(std::ostream& op, const Matrix<TValor>& _matrix) {

    for (int i = 0; i < _matrix.getRows(); i++) {
        op << std::endl;

        for (int j = 0; j < _matrix.getCols(); j++) {
            op << _matrix.m[i][j] << " ";
        }
    }
    return op;
}