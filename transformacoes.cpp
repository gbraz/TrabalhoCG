#include "transformacoes.h"

Transformacoes::Transformacoes()
{

}

std::vector< std::vector<double> > Transformacoes::escala(double x, double y, double z){
    std::vector< std::vector<double> > matEscala;

    matEscala.resize(4);
    for(int i = 0; i < 4; i++)
        matEscala[i].resize(4);

    matEscala[0][0] = x;
    matEscala[1][1] = y;
    matEscala[2][2] = z;
    matEscala[3][3] = 1;


    return matEscala;
}

std::vector< std::vector<double> > Transformacoes::translacao(double x, double y , double z){
    std::vector< std::vector<double> > matTransl;

    matTransl.resize(4);
    for(int i = 0; i < 4; i++)
        matTransl[i].resize(4);

    matTransl[3][0] = x;
    matTransl[3][1] = y;
    matTransl[3][2] = z;
    matTransl[0][0] = 1;
    matTransl[1][1] = 1;
    matTransl[2][2] = 1;
    matTransl[3][3] = 1;


    return matTransl;
}

std::vector< std::vector<double> > Transformacoes::rotacaoX(double angulo){
    std::vector< std::vector<double> > matRot;

    angulo = angulo*(PI/180);

    matRot.resize(4);
    for(int i = 0; i < 4; i++)
        matRot[i].resize(4);

    matRot[0][0] = matRot[3][3] = 1;
    matRot[1][1] = cos(angulo);
    matRot[1][2] = -sin(angulo);
    matRot[2][1] = sin(angulo);
    matRot[2][2] = cos(angulo);

    return matRot;
}

std::vector< std::vector<double> > Transformacoes::rotacaoY(double angulo){
    std::vector< std::vector<double> > matRot;

    angulo = angulo*(PI/180);

    matRot.resize(4);
    for(int i = 0; i < 4; i++)
        matRot[i].resize(4);

    matRot[1][1] = matRot[3][3] = 1;
    matRot[0][0] = cos(angulo);
    matRot[2][0] = -sin(angulo);
    matRot[0][2] = sin(angulo);
    matRot[2][2] = cos(angulo);

    return matRot;
}
