#include "mainwindow.h"
#include <QApplication>

#include <cubo.h>
#include "transformacoes.h"
#include "matriz.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Cubo c1, c2, c3, c4, c5;
    Transformacoes trans;
    Matriz mat;


    //Tampo da Mesa
    std::vector< std::vector<double> > transfMesa;
    transfMesa = mat.produto(trans.escala(110, 60, 150), trans.translacao(1, 1, 1));
    transfMesa = mat.produto(trans.rotacaoX(90), transfMesa);
    transfMesa = mat.produto(trans.translacao(0, 75, 0), transfMesa);

    for(int i = 0; i < c1.ListaDeVertices.size(); i++)
        c1.ListaDeVertices[i] = mat.produtoMatrizVetor(transfMesa, c1.ListaDeVertices[i]);

    //Pés da Mesa
    std::vector< std::vector<double> > transfPe;
    transfPe = mat.produto(trans.escala(110, 60, 1.5), trans.translacao(1, 1, 1));
    transfPe = mat.produto(trans.rotacaoX(90), transfPe);
    transfPe = mat.produto(trans.translacao(0, 72, 0), transfPe);
    for(int i = 0; i < c1.ListaDeVertices.size(); i++){
        c2.ListaDeVertices[i] = mat.produtoMatrizVetor(transfPe, c2.ListaDeVertices[i]);
        c3.ListaDeVertices[i] = mat.produtoMatrizVetor(transfPe, c3.ListaDeVertices[i]);
        c4.ListaDeVertices[i] = mat.produtoMatrizVetor(transfPe, c4.ListaDeVertices[i]);
        c5.ListaDeVertices[i] = mat.produtoMatrizVetor(transfPe, c5.ListaDeVertices[i]);
    }

    for(int i = 0; i < c1.ListaDeVertices.size(); i++)
        c3.ListaDeVertices[i] = mat.produtoMatrizVetor(trans.translacao(215, 0, 0), c3.ListaDeVertices[i]);

    for(int i = 0; i < c1.ListaDeVertices.size(); i++)
        c4.ListaDeVertices[i] = mat.produtoMatrizVetor(trans.translacao(0, 0, 117), c4.ListaDeVertices[i]);

    for(int i = 0; i < c1.ListaDeVertices.size(); i++)
        c5.ListaDeVertices[i] = mat.produtoMatrizVetor(trans.translacao(215, 0, 117), c5.ListaDeVertices[i]);





    return a.exec();
}
