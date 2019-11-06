//
// Created by utec on 6/11/19.
//
#include "classMasterFiguraGeometrica.h"
#include "classRectangulo.h"
#include "miscelanius.h"

classRectangulo::classRectangulo(t_dimeniones h, t_dimeniones w, t_coordenadas px, t_coordenadas py, sf::Color clr,
                                 sf::RenderWindow *cnvs) :
                                 classMasterFiguraGeometrica(h, w, px, py, clr, cnvs)
                                 {}
void classRectangulo::draw() {
    sf::RectangleShape rectangle;
    rectangle.setPosition(pos_x,pos_y);
    rectangle.setSize(
            sf:
            )


}

t_decimal classRectangulo::calcular_area() {
    return 0;
}

t_decimal classRectangulo::calcular_perimetro() {
    return 0;
}
