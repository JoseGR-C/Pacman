#ifndef GRAPHICS_H
#define GRAPHICS_H

#include<QImage>

#include<Juego.h>

class Graphics
{


public:
    Graphics();
    QImage getImage();
    void setImage(Juego *juego);
    void pintarComida(int i, int j,int pX,int pY);
    void pintarPacman(int i, int j,int pX,int pY, int direccion);
    void pintarFantasma(int i, int j, int id,int pX,int pY);
    void pintarSuperComida(int i, int j,int pX,int pY);
    void incrementarContador();
    void pintarVerja(int pX, int pY);

private:
    QImage image;
    int contador;



};

#endif // GRAPHICS_H
