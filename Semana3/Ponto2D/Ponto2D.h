//
// Created by word2 on 18/06/2021.
//

#ifndef SEMANA3_PONTO2D_H
#define SEMANA3_PONTO2D_H

#include "iostream"
#include "vector"
#include "math.h"

class Ponto2D {

    int id;
    double x, y;
    static std::vector<int> *ids;
    static int getNextId();
    void set_id (const int &_id);
    static double calc_dist_coordinates(const double &dx , const double &dy);

public:

    Ponto2D();
    Ponto2D(const double &_x, const double &_y);
    double get_x() const;
    double get_y() const;
    double get_id() const;

    void set_x(const double &_x);
    void set_y(const double &_y);

    void print() const;
    double distToOrig(const Ponto2D &_p2) const;
    double distToOrig() const;

    void sumOf(const Ponto2D &_p2);
    Ponto2D sumToNewPoint(const Ponto2D &_p2) const;

};

//Ponto2D::ids = new std::vector<int>();

#endif //SEMANA3_PONTO2D_H
