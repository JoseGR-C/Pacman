#include<personaje.h>


#ifndef JUEGO_H
#define JUEGO_H


class Juego
{

private:

int tablero[21][27]; // tablero del juego.
int comida; // comida disponible, cuando ==0 hemos ganado
int direccion[2];
int estado; // 0 juego sin arrancar, 1 jugando, 2 perdido, 3 ganado.
Personaje pacman;
Fantasma fantasmas[4];
float timeFantasmas;
float intervalos;



public:
    Juego();
    Juego(int dificultad, int intervalos);
    int lengthX,lengthY;
    int queHay(int x, int y);
    void moverPacman();
    void moverFantasma (Fantasma *fantasma);
    void moverFantasmas();
    bool sePuedeMover(int direccion, int x, int y);
    void ronda();
    void actualizarEstado();
    int getEstado();
    void setDireccion(int direccion);
    int getDireccion();
    int hayFantasma(int x, int y);
    void procesarTiempo();
    void comerFantasma(int id);
    void protocoloFantasma(); // para cuando se vuelven vulnerables
    int getTimeFantasmas();
    void comprobarComida();
};

#endif // JUEGO_H
