//
// Created by utec on 6/11/19.
//

#ifndef GAAA_CLASSCIRCULO_H
#define GAAA_CLASSCIRCULO_H

#include "miscelanius.h"
#include "classMasterFiguraGeometrica.h"

class classCirculo: protected classMasterFiguraGeometrica {
public:
    classCirculo(t_dimeniones h,t_dimeniones w,t_coordenadas px,t_coordenadas py,sf::Color clr,sf::RenderWindow* cnvs);
    void draw() override ;
    t_decimal calcular_area()override ;
    t_decimal calcular_perimetro()override ;

};


#endif //GAAA_CLASSCIRCULO_H
