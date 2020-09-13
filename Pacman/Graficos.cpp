#include "Graficos.h"

Graficos::Graficos()
{
    this->contador = 1;

    QImage image(":/tablero_paint.jpg");
    this->image = image;


}

QImage Graficos :: getImage(){
    return this->image;
}

void Graficos :: setImage(Juego *juego){
    image.load(":/tablero_paint.jpg");

    QSize size = image.size();
    int pX = size.width() / (juego->lengthX-2);
    int pY = size.height() / (juego->lengthY-2);

        for(int i=1; i<juego->lengthX;i++){
            for(int j=1; j<juego->lengthY;j++){


                      if(juego->queHay(i,j)==2) pintarComida(i-1,j-1,pX,pY);
                      if(juego->queHay(i,j)==3) pintarSuperComida(i-1,j-1,pX,pY);
                      if(juego->queHay(i,j)==4) pintarPacman(i-1,j-1,pX,pY,juego->getDireccion());
                      if(juego->queHay(i,j)>=5) pintarFantasma(i-1,j-1,juego->queHay(i,j)-4,pX,pY);

              }

            }

}

void Graficos :: pintarComida(int i, int j,int pX,int pY){

    int ancho = pX/5; //ancho de la comida

   QRgb value = qRgb(255, 255, 0); //amarillo para la comida

    for(int x=ancho*3 ; x<ancho*4 ; x++){
        for(int y=ancho*3 ; y<=ancho*4 ; y++){

            image.setPixel(i*pX+x, j*pY+y, value);


          }

        }

}

void Graficos :: pintarPacman(int i, int j,int pX,int pY, int direccion){

    QImage *pacman = new QImage(":/pacman_"+QString("%1").arg(contador)+".png");
    incrementarContador();
    QSize size2 = pacman->size();

    int margenH = pX-size2.width();
    int margenV = pY-size2.height();


    switch (direccion) {
    case 0:



    case 1: // arriba

        for (int x = 0; x<size2.width() ; x++ ) {
            for (int y = 0; y<size2.height() ; y++ ) {

                this->image.setPixel(i*pX+x+margenH/2,j*pY+y+margenV/2,pacman->pixel(size2.width()-1-y,x));
            }
        }

        break;

    case 2: //izquierda

        for (int x = 0; x<size2.width() ; x++ ) {
            for (int y = 0; y<size2.height() ; y++ ) {

                this->image.setPixel(i*pX+x+margenH/2,j*pY+y+margenV/2,pacman->pixel(size2.width()-1-x,y));
            }
        }

        break;

    case 3: //abajo

        for (int x = 0; x<size2.width() ; x++ ) {
            for (int y = 0; y<size2.height() ; y++ ) {

                this->image.setPixel(i*pX+x+margenH/2,j*pY+y+margenV/2,pacman->pixel(y,x));
            }
        }

        break;

    case 4:  //dcha

        for (int x = 0; x<size2.width() ; x++ ) {
            for (int y = 0; y<size2.height() ; y++ ) {

                this->image.setPixel(i*pX+x+margenH/2,j*pY+y+margenV/2,pacman->pixel(x,y));
            }
        }

        break;

    }

}

void Graficos :: pintarFantasma(int i, int j, int id,int pX,int pY){

    QImage *fantasma = new QImage(":/f"+ QString("%1").arg(id) +"_1.png");

    QSize size2 = fantasma->size();

    int margenH = pX-size2.width();
    int margenV = pY-size2.height();

    for (int x = 0; x<size2.width() ; x++ ) {
        for (int y = 0; y<size2.height() ; y++ ) {

            this->image.setPixel(i*pX+x+margenH/2,j*pY+y+margenV/2,fantasma->pixel(x,y));
        }
    }

}

void Graficos :: pintarSuperComida(int i, int j,int pX,int pY){

   int ancho = pX/3; //ancho de la comida

   QRgb value = qRgb(255, 255, 0); //amarillo para la comida



    for(int x=ancho ; x<ancho*2 ; x++){
        for(int y=ancho ; y<=ancho*2 ; y++){

            image.setPixel(i*pX+x, j*pY+y, value);


          }

        }

}

void Graficos :: perder(){;}

void Graficos :: ganar(){;}

void Graficos :: incrementarContador(){
    if (contador==7) contador =1;
    else contador++;
}
