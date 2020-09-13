#ifndef PERSONAJE_H
#define PERSONAJE_H


class Personaje
{
public:
    Personaje();
    Personaje (int x, int y);
    void mover();
    void setDireccion( int direccion);
    void getDireccion(int *direccion);
    void setPosicion(int x, int y);
    void getPosicion(int *x, int *y);

private:
    int direccion;
    int posicion[2];

};

class Fantasma : public Personaje{


  public:
    void moverFantasma(Personaje pacman);
    int getDebajo();
    void setDebajo( int valor );
    int getId();
    Fantasma(int x, int y, int punteria, int id) : Personaje(x,y){ this->id=id; this->punteria = punteria; this->debajo=0;}
    Fantasma() : Personaje(10,10){ this->id= 1; this->punteria = 100; this->debajo=0;}

private:
    int punteria;
    int id;
    int debajo;

};

#endif // PERSONAJE_H


