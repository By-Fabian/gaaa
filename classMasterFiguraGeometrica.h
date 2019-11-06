//
// Created by utec on 6/11/19.
//

#ifndef GAAA_CLASSMASTERFIGURAGEOMETRICA_H
#define GAAA_CLASSMASTERFIGURAGEOMETRICA_H

#include "miscelanius.h"


#endif //GAAA_CLASSMASTERFIGURAGEOMETRICA_H

class classMasterFiguraGeometrica {
protected:
    t_dimeniones height;
    t_dimeniones widht;
    t_coordenadas pos_x;
    t_coordenadas pos_y;
    sf::Color color;
    sf::RenderWindow* canvas;
public:
    classMasterFiguraGeometrica(t_dimeniones h,t_dimeniones w,t_coordenadas px,t_coordenadas py,sf::Color clr,sf::RenderWindow* cnvs);
    virtual void draw()=0;
    virtual t_decimal calcular_area()=0;
    virtual t_decimal calcular_perimetro()=0;


};

