#include "vertice.h"

Vertice::Vertice()
{

}

Vertice::Vertice(double x, double y, double z)
{
    setCoordenadas(x, y, z);

}

/* **Setters** */

Vertice::setCoordenadas(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
        coordenadas.pushback(x);
        coordenadas.pushback(y);
        coordenadas.pushback(z);
}

Vertice::setX(double x){
    this->x = x;
}

Vertice::setY(double y){
    this->y = y;
}

Vertice::setZ(double z){
    this->z = z;
}

/* **Getters** */

vector<double> Vertice::getCoordenadas(){
    return coordenadas;
}

double Vertice::getX(){
    return x;
}

double Vertice::getY(){
    return y;
}

double Vertice::getZ(){
    return z;
}
