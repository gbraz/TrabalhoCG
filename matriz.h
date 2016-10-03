#ifndef MATRIZ_H
#define MATRIZ_H

#include <vector>

class Matriz
{
public:
    Matriz();
    std::vector< std::vector<double> > produto(std::vector< std::vector<double> >, std::vector< std::vector<double> >);
};

#endif // MATRIZ_H
