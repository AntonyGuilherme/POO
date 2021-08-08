//
// Created by word2 on 01/08/2021.
//

#include "Ponto3D.h"

Ponto3D ::Ponto3D(double xx, double yy, double zz) : Ponto2D(xx,yy) , z(zz) {}

double Ponto3D ::get_z() const {return this->z;}

void Ponto3D::set(double nx, double ny, double nz) {
    Ponto2D::set(nx,ny);
    this->z = nz;
}


