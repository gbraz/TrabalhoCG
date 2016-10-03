#include "cubo.h"

Cubo::Cubo()
{

    v1.push_back(1);
    v1.push_back(-1);
    v1.push_back(1);
    v1.push_back(1);
    ListaDeVertices.push_back(v1);

    v2.push_back(1);
    v2.push_back(-1);
    v2.push_back(-1);
    v2.push_back(1);
    ListaDeVertices.push_back(v2);

    v3.push_back(-1);
    v3.push_back(-1);
    v3.push_back(-1);
    v3.push_back(1);
    ListaDeVertices.push_back(v3);

    v4.push_back(-1);
    v4.push_back(-1);
    v4.push_back(1);
    v4.push_back(1);
    ListaDeVertices.push_back(v4);

    v5.push_back(1);
    v5.push_back(1);
    v5.push_back(1);
    v5.push_back(1);
    ListaDeVertices.push_back(v5);

    v6.push_back(1);
    v6.push_back(1);
    v6.push_back(-1);
    v6.push_back(1);
    ListaDeVertices.push_back(v6);

    v7.push_back(-1);
    v7.push_back(1);
    v7.push_back(-1);
    v7.push_back(1);
    ListaDeVertices.push_back(v7);

    v8.push_back(-1);
    v8.push_back(1);
    v8.push_back(1);
    v8.push_back(1);
    ListaDeVertices.push_back(v8);

    Aresta a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12;

    a1.vertices.push_back(v1);
    a1.vertices.push_back(v2);
    ListaDeArestas.push_back(a1);

    a2.vertices.push_back(v2);
    a2.vertices.push_back(v3);
    ListaDeArestas.push_back(a2);

    a3.vertices.push_back(v3);
    a3.vertices.push_back(v4);
    ListaDeArestas.push_back(a3);

    a4.vertices.push_back(v4);
    a4.vertices.push_back(v1);
    ListaDeArestas.push_back(a4);

    a5.vertices.push_back(v5);
    a5.vertices.push_back(v6);
    ListaDeArestas.push_back(a5);

    a6.vertices.push_back(v6);
    a6.vertices.push_back(v7);
    ListaDeArestas.push_back(a6);

    a7.vertices.push_back(v7);
    a7.vertices.push_back(v8);
    ListaDeArestas.push_back(a7);

    a8.vertices.push_back(v8);
    a8.vertices.push_back(v5);
    ListaDeArestas.push_back(a8);

    a9.vertices.push_back(v1);
    a9.vertices.push_back(v5);
    ListaDeArestas.push_back(a9);

    a10.vertices.push_back(v2);
    a10.vertices.push_back(v6);
    ListaDeArestas.push_back(a10);

    a11.vertices.push_back(v3);
    a11.vertices.push_back(v7);
    ListaDeArestas.push_back(a11);

    a12.vertices.push_back(v4);
    a12.vertices.push_back(v8);
    ListaDeArestas.push_back(a12);

    Face f1(v1, v4, v2),
            f2(v2, v4, v3),
            f3(v5, v6, v7),
            f4(v5, v7, v8),
            f5(v1, v5, v8),
            f6(v1, v8, v4),
            f7(v2, v6, v5),
            f8(v2, v5, v1),
            f9(v3, v7, v6),
            f10(v3, v6, v2),
            f11(v4, v8, v7),
            f12(v4, v7, v3);


}
