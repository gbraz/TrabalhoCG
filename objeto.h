#ifndef OBJETO_H
#define OBJETO_H

#include <string>
#include <vector>
#include <face.h>


class Objeto
{
    std::string nome;

public:
    Objeto();
    std::vector<Face> faces;

};

#endif // OBJETO_H
