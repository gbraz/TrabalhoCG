#ifndef VERTICE_H
#define VERTICE_H
#include <vector>


class Vertice
{

    double x, y, z;
    vector<double> coordenadas;

public:
    Vertice();
    Vertice(double, double, double);

    setCoordenadas(double, double, double);
    setX(double);
    setY(double);
    setZ(double);

    vector<double> getCoordenadas();
    double getX();
    double getY();
    double getZ();

};

#endif // VERTICE_H
