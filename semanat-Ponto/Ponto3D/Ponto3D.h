//
// Created by word2 on 01/08/2021.
//

#ifndef SEMANAT_PONTO_PONTO3D_H
#define SEMANAT_PONTO_PONTO3D_H

#include <iostream>
#include "./../Ponto/Ponto2D.h"

class Ponto3D: public Ponto2D{

public:
    Ponto3D(double xx = 0, double yy = 0, double zz=0);

    void set(double nx = 0, double ny = 0, double nz=0);
    double get_z() const;

    friend std :: ostream& operator<< (std :: ostream &op,Ponto3D& p){

        op << "x = " << p.get_x() << std::endl;
        op << "y = " << p.get_y() << std::endl;
        op << "y = " << p.z << std::endl;

        return op;
    };

    Ponto3D& operator= (const Ponto3D &p){
        this->set(p.get_x(),p.get_y(),p.get_z());
        return (*this);
    };

    Ponto3D& operator= (const Ponto2D &p){
        this->set(p.get_x(),p.get_y(),0);
        return (*this);
    };

private:
    double z;
};

#endif //SEMANAT_PONTO_PONTO3D_H
