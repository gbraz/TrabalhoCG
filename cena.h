#ifndef CENA_H
#define CENA_H
#include <vector>
#include "objeto.h"
#include "iluminacao.h"
#include "camera.h"

class Cena
{
    void carregarCena(std::string);

public:
    Cena();
    vector<Objeto> objetos;
    Iluminacao fonteDeLuz;
    Camera cameraCena;
};

#endif // CENA_H
