#ifndef CENA_H
#define CENA_H
#include <vector>
#include "objeto.h"
#include "iluminacao.h"
#include "camera.h"

class cena
{
    void carregarCena(std::string);

public:
    cena();
    vector<objeto> objetos;
    iluminacao fonteDeLuz;
    camera cameraCena;
};

#endif // CENA_H
