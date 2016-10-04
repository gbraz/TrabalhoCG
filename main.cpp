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

    // ** Tarefa 1 **

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

    for(int i = 0; i < c2.ListaDeVertices.size(); i++){
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


    // ** Tarefa 2 **

    std::vector< std::vector<double> > transfCentro;

    transfCentro = mat.produto(trans.rotacaoY(-30), trans.translacao(-110, 0, -60));
    transfCentro = mat.produto(trans.translacao(50, 0, 25), transfCentro);

    for(int i = 0; i < c1.ListaDeVertices.size(); i++){
        c1.ListaDeVertices[i] = mat.produtoMatrizVetor(transfCentro, c1.ListaDeVertices[i]);
        c2.ListaDeVertices[i] = mat.produtoMatrizVetor(transfCentro, c2.ListaDeVertices[i]);
        c3.ListaDeVertices[i] = mat.produtoMatrizVetor(transfCentro, c3.ListaDeVertices[i]);
        c4.ListaDeVertices[i] = mat.produtoMatrizVetor(transfCentro, c4.ListaDeVertices[i]);
        c5.ListaDeVertices[i] = mat.produtoMatrizVetor(transfCentro, c5.ListaDeVertices[i]);
    }

    // ** Tarefa 4 **

    gerarImagem(500, 500, 140, 140, 70, ListaDeFaces c1, luz);
    gerarImagem(500, 500, 140, 140, 70, ListaDeFaces c2, luz);
    gerarImagem(500, 500, 140, 140, 70, ListaDeFaces c3, luz);
    gerarImagem(500, 500, 140, 140, 70, ListaDeFaces c4, luz);
    gerarImagem(500, 500, 140, 140, 70, ListaDeFaces c5, luz);




 }


    return a.exec();
}
