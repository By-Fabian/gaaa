//
// Created by utec on 6/11/19.
//

#include "classMasterFiguraGeometrica.h"

classMasterFiguraGeometrica::classMasterFiguraGeometrica(t_dimeniones h, t_dimeniones w, t_coordenadas px,
                                                         t_coordenadas py, sf::Color clr, sf::RenderWindow *cnvs)
                                                         :height{h},widht{w},pos_x{px},pos_y{py},color{clr},canvas{cnvs}
                                                         {}
