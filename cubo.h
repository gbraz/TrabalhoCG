#ifndef CUBO_H
#define CUBO_H

#include <vector>
#include <aresta.h>
#include <face.h>

class Cubo
{
public:
    Cubo();
    std::vector<double> v1, v2, v3, v4, v5, v6, v7, v8;
    std::vector< std::vector<double> > ListaDeVertices;
    std::vector<Aresta> ListaDeArestas;
    std::vector<Face> ListaDeFaces;
};

#endif // CUBO_H
