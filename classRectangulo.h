//
// Created by utec on 6/11/19.
//

#ifndef GAAA_CLASSRECTANGULO_H
#define GAAA_CLASSRECTANGULO_H

#include "miscelanius.h"
#include "classMasterFiguraGeometrica.h"

class classRectangulo: protected classMasterFiguraGeometrica {
public:
    classRectangulo(t_dimeniones h,t_dimeniones w,t_coordenadas px,t_coordenadas py,sf::Color clr,sf::RenderWindow* cnvs);
    void draw() override;
    t_decimal calcular_area()override ;
    t_decimal calcular_perimetro()override ;

};


#endif //GAAA_CLASSRECTANGULO_H
