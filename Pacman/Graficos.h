#ifndef GRAFICOS_H
#define GRAFICOS_H
#include "mainwindow.h"

class Graficos
{

public:
    Graficos();
    QImage getImage();
    void setImage(Juego *juego);
    void pintarComida(int i, int j,int pX,int pY);
    void pintarPacman(int i, int j,int pX,int pY, int direccion);
    void pintarFantasma(int i, int j, int id,int pX,int pY);
    void pintarSuperComida(int i, int j,int pX,int pY);
    void perder();
    void ganar();
    void incrementarContador();


private:
    QImage image;
    int contador;
};

#endif // GRAFICOS_H
