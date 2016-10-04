#ifndef TRANSFORMACOES_H
#define TRANSFORMACOES_H
#define PI 3.14159265

#include <vector>
#include <math.h>


class Transformacoes
{
public:
    Transformacoes();
    std::vector< std::vector<double> > escala(double, double, double);
    std::vector< std::vector<double> > translacao(double, double, double);
    std::vector< std::vector<double> > rotacaoX(double);
    std::vector< std::vector<double> > rotacaoY(double);
};

#endif // TRANSFORMACOES_H
