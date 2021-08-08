//
// Created by word2 on 01/08/2021.
//

#ifndef SEMANAT_PONTO_PONTO2D_H
#define SEMANAT_PONTO_PONTO2D_H

#include <iostream>

class Ponto2D{

public:
    Ponto2D(double xx = 0.0, double yy = 0.0):x(xx),y(yy){ };

    friend std::ostream& operator<< (std::ostream &op, const Ponto2D &p) {
        op << std::endl;
        op << "x = " << p.x << std::endl;
        op << "y = " << p.y << std::endl;
        return op;
    };

    Ponto2D& operator= (const Ponto2D &p){
        x = p.x;
        y = p.y;
        return *this;
    };


    ~Ponto2D(){};
    double get_x(void) const { return x; }
    double get_y(void) const { return y; }
    void set (double nx, double ny) { x=nx; y=ny; }

private:
    double x;
    double y;
};





#endif //SEMANAT_PONTO_PONTO2D_H
