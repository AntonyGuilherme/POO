//
// Created by word2 on 27/06/2021.
//

#ifndef SEMANA4_PONTO2D_PONTO2D_H
#define SEMANA4_PONTO2D_PONTO2D_H

#include "iostream"
#include "vector"
#include "math.h"

class Ponto2D {

    const int id;
    double x, y;
    static std::vector<int> *ids;
    static int getNextId();
    static double calc_dist_coordinates(const double &dx , const double &dy);

public:

    Ponto2D(const double &_x = 0, const double &_y = 0);
    Ponto2D(const Ponto2D &_ponto);
    ~Ponto2D();
    double get_x() const;
    double get_y() const;
    int get_id() const;

    void set_x(const double &_x);
    void set_y(const double &_y);

    void print() const;
    double distToOrig(const Ponto2D &_p2) const;
    double distToOrig() const;

    void sumOf(const Ponto2D &_p2);
    Ponto2D sumToNewPoint(const Ponto2D &_p2) const;

};

#endif //SEMANA4_PONTO2D_PONTO2D_H
