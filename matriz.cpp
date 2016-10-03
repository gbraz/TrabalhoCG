#include "matriz.h"

Matriz::Matriz()
{

}

std::vector< std::vector<double> > Matriz::produto(std::vector< std::vector<double> > m1, std::vector< std::vector<double> > m2){
    std::vector< std::vector<double> > resultado;

    resultado.resize(m1[0].size());
    for(int i = 0; i < m1[0].size(); i++)
        resultado[i].resize(m2.size());

    for(int i = 0; i < m1.size(); i++)
        for(int j = 0; j < m2.size(); j++){
            resultado[i][j] = 0;
            for(int k = 0; k < m1[0].size(); k++)
                resultado[i][j] += m1[i][k]*m2[k][j];
        }

    return resultado;
}
