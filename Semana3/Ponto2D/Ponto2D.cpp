//
// Created by word2 on 18/06/2021.
//

#include "Ponto2D.h"
#include "string"

std :: vector<int> * Ponto2D :: ids = new std::vector<int>;
const std :: string EX_IDS_UNVAIBLES = "No Ids Availables";

int Ponto2D::getNextId() {

    if(Ponto2D :: ids->size() >= 1000) throw (EX_IDS_UNVAIBLES);

    // gera números de 1 até 1000
    int rand_number = rand() % 1000 + 1;

    /*
     * verificando se o id gerado já pertence a outro objeto
     * caso pertença o processo é realizado novamente até que seja gerado um id válido
     */
    for(auto id : (* Ponto2D :: ids))
        if(id == rand_number) return Ponto2D::getNextId();


    return rand_number;
}

double Ponto2D::calc_dist_coordinates(const double &dx, const double &dy) {

    /*
     * O modulo da distância entre dois pontos é a raiz quadrada
     * da soma da variação de x e y , ambos elevados ao quadrado
     */

    const double _dx_2 = std :: pow(dx,2);
    const double _dy_2 = std :: pow(dy,2);

    return (double) (std ::sqrt(_dx_2 + _dy_2));
}

inline void Ponto2D::set_id(const int &_id) {this->id = _id;}

inline Ponto2D::Ponto2D() : Ponto2D(0,0) {}

inline Ponto2D::Ponto2D(const double &_x, const double &_y) : x(_x) , y(_y) { this->set_id(this->getNextId());}

inline double Ponto2D::get_x() const { return this->x;}

inline double Ponto2D::get_y() const { return this->y; }

inline double Ponto2D::get_id() const { return this->id; }

inline  void Ponto2D::set_x(const double &_x) { this->x = _x ;}

inline void Ponto2D::set_y(const double &_y) { this->y = _y ; }

void Ponto2D::print() const {
    std :: cout << "( " << this->get_x() << " , " << this->get_y() << " )" << std :: endl;
}

double Ponto2D::distToOrig(const Ponto2D &_p2) const {

    const double dx = _p2.get_x() - this->get_y();
    const double dy = _p2.get_y() - this->get_y();

    return this->calc_dist_coordinates(dx,dy);
}

inline double Ponto2D::distToOrig() const { return this->calc_dist_coordinates(this->get_x(),this->get_y());}

void Ponto2D::sumOf(const Ponto2D &_p2) {
    /*
     * Somando as coordenadas dos pontos
     * */
    const double new_x = this->get_x() + _p2.get_x();
    const double new_y = this->get_y() + _p2.get_y();
    this->set_x(new_x);
    this->set_y(new_y);
}

Ponto2D Ponto2D::sumToNewPoint(const Ponto2D &_p2) const {
    const double new_x = this->get_x() + _p2.get_x();
    const double new_y = this->get_y() + _p2.get_y();

    return (* new Ponto2D(new_x,new_y));
}



