#ifndef TRANSFORMACOES_H
#define TRANSFORMACOES_H

#include <vector>
#include <math.h>


class Transformacoes
{
public:
    Transformacoes();
    std::vector< std::vector<double> > escala(double, double, double);
    std::vector< std::vector<double> > translacao(double, double, double);
    std::vector< std::vector<double> > rotacaoX(double);
};

#endif // TRANSFORMACOES_H
