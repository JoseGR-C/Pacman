#include "personaje.h"
#include <cmath>
#include<random>

Personaje::Personaje()
{
    this->direccion=0;
    this->posicion[0]= 1;
    this->posicion[1]= 1;
}

Personaje :: Personaje (int x, int y) {
    this->direccion = 0;
    this->posicion[0] = x;
    this->posicion[1] = y;
}

void Personaje :: mover(){

    switch (direccion) {

        case 1: // arriba
        posicion[1] -=1;
        break;


       case 2:  //izquierda
         posicion[0]--;
       break;


       case 3:  // abajo
         posicion[1]++;
       break;


       case 4:  // derecha
         posicion[0]++;
       break;


       default :
        break;

    }
}

void Personaje :: setDireccion( int direccion){

    this->direccion = direccion;
}

void Personaje :: getDireccion(int *direccion){
    *direccion = this->direccion;
}

void Personaje :: setPosicion(int x, int y){
    this->posicion[0] = x;
    this->posicion[1] = y;
}

void Personaje :: getPosicion(int *x, int *y){
    *x = this->posicion[0];
    *y = this->posicion[1];
}

int Fantasma :: getId(){
    return this->id;}

void Fantasma :: moverFantasma(Personaje pacman){
    int direccion= 0 ;

    //Punteria = probabilidades de que se tome el camino correcto

    //Tiramos un dado para ver si elegimos la direccion correcta o aleatoria

    if(this->punteria >= rand()%101) { // si elegimos la direccion correcta

    int xp,yp;

    pacman.getPosicion(&xp,&yp);

    int xf,yf;

   this->getPosicion(&xf,&yf);

    int vX = xp - xf;
    int vY = yp - yf;

 if( abs(vX) > abs(vY)  ){  // habra que moverse en horizontal

    if (vX>0) {direccion = 4;} // izquierda
        else { direccion = 2;}  //derecha

 }
    else{  // habra que moverse en vertical

     if (vY>0) { direccion = 3;} // hacia abajo

         else {direccion = 1;}  // hacia arriba

 }

}

else {  // si elegimos una direccion cualquiera
        direccion = rand()%5;
    }


    this->setDireccion(direccion);

}

int Fantasma :: getDebajo(){

    return this->debajo;

}

void Fantasma :: setDebajo( int valor) {

    this->debajo = valor;
}
