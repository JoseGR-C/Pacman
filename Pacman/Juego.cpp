#include "Juego.h"

Juego::Juego()
{
    lengthX = 21;
    lengthY = 27;
    this->pacman = Personaje(1,1);
    this->timeFantasmas = 0;

    this->fantasmas[0] = Fantasma(10,13,100,1);
    this->fantasmas[1] = Fantasma(10,13,100,2);
    this->fantasmas[2] = Fantasma(10,13,100,3);
    this->fantasmas[3] = Fantasma(10,13,100,4);
    this->intervalos = 1000;


 for( int i= 0; i<lengthX ; i++)
 {

     for(int j=0; j<lengthY; j++){
         //Ponemos los bordes a 0
        if((i==0) || (i==(lengthX-1)) || (j==0) || (j==(lengthY-1))) {tablero[i][j]=0;}
         else { tablero[i][j] = 2; } // 2 es casilla con comida


     }



     //A continuacion ponemos los limites  de dentro del tablero
     tablero[1][9]=0;
     tablero[1][10]=0;
     tablero[1][11]=0;
     tablero[1][12]=0;
     tablero[1][14]=0;
     tablero[1][15]=0;
     tablero[1][16]=0;
     tablero[1][17]=0;
     tablero[1][21]=0;
     tablero[1][22]=0;

     tablero[19][9]=0;
     tablero[19][10]=0;
     tablero[19][11]=0;
     tablero[19][12]=0;
     tablero[19][14]=0;
     tablero[19][15]=0;
     tablero[19][16]=0;
     tablero[19][17]=0;
     tablero[19][21]=0;
     tablero[19][22]=0;

     tablero[2][2]=0;
     tablero[2][3]=0;
     tablero[2][4]=0;
     tablero[2][6]=0;
     tablero[2][7]=0;
     tablero[2][9]=0;
     tablero[2][10]=0;
     tablero[2][11]=0;
     tablero[2][12]=0;
     tablero[2][14]=0;
     tablero[2][15]=0;
     tablero[2][16]=0;
     tablero[2][17]=0;
     tablero[2][19]=0;
     tablero[2][21]=0;
     tablero[2][22]=0;
     tablero[2][24]=0;

     tablero[18][2]=0;
     tablero[18][3]=0;
     tablero[18][4]=0;
     tablero[18][6]=0;
     tablero[18][7]=0;
     tablero[18][9]=0;
     tablero[18][10]=0;
     tablero[18][11]=0;
     tablero[18][12]=0;
     tablero[18][14]=0;
     tablero[18][15]=0;
     tablero[18][16]=0;
     tablero[18][17]=0;
     tablero[18][19]=0;
     tablero[18][21]=0;
     tablero[18][22]=0;
     tablero[18][24]=0;

     tablero[3][2]=0;
     tablero[3][3]=0;
     tablero[3][4]=0;
     tablero[3][6]=0;
     tablero[3][7]=0;
     tablero[3][9]=0;
     tablero[3][10]=0;
     tablero[3][11]=0;
     tablero[3][12]=0;
     tablero[3][14]=0;
     tablero[3][15]=0;
     tablero[3][16]=0;
     tablero[3][17]=0;
     tablero[3][19]=0;
     tablero[3][24]=0;

     tablero[17][2]=0;
     tablero[17][3]=0;
     tablero[17][4]=0;
     tablero[17][6]=0;
     tablero[17][7]=0;
     tablero[17][9]=0;
     tablero[17][10]=0;
     tablero[17][11]=0;
     tablero[17][12]=0;
     tablero[17][14]=0;
     tablero[17][15]=0;
     tablero[17][16]=0;
     tablero[17][17]=0;
     tablero[17][19]=0;
     tablero[17][24]=0;

     tablero[4][2]=0;
     tablero[4][3]=0;
     tablero[4][4]=0;
     tablero[4][6]=0;
     tablero[4][7]=0;
     tablero[4][9]=0;
     tablero[4][10]=0;
     tablero[4][11]=0;
     tablero[4][12]=0;
     tablero[4][14]=0;
     tablero[4][15]=0;
     tablero[4][16]=0;
     tablero[4][17]=0;
     tablero[4][19]=0;
     tablero[4][20]=0;
     tablero[4][21]=0;
     tablero[4][22]=0;
     tablero[4][24]=0;

     tablero[16][2]=0;
     tablero[16][3]=0;
     tablero[16][4]=0;
     tablero[16][6]=0;
     tablero[16][7]=0;
     tablero[16][9]=0;
     tablero[16][10]=0;
     tablero[16][11]=0;
     tablero[16][12]=0;
     tablero[16][14]=0;
     tablero[16][15]=0;
     tablero[16][16]=0;
     tablero[16][17]=0;
     tablero[16][19]=0;
     tablero[16][20]=0;
     tablero[16][21]=0;
     tablero[16][22]=0;
     tablero[16][24]=0;

     tablero[5][24]=0;

     tablero[15][24]=0;

     tablero[6][2]=0;
     tablero[6][3]=0;
     tablero[6][4]=0;
     tablero[6][6]=0;
     tablero[6][7]=0;
     tablero[6][8]=0;
     tablero[6][9]=0;
     tablero[6][10]=0;
     tablero[6][11]=0;
     tablero[6][12]=0;
     tablero[6][14]=0;
     tablero[6][15]=0;
     tablero[6][16]=0;
     tablero[6][17]=0;
     tablero[6][19]=0;
     tablero[6][21]=0;
     tablero[6][22]=0;
     tablero[6][23]=0;
     tablero[6][24]=0;

     tablero[14][2]=0;
     tablero[14][3]=0;
     tablero[14][4]=0;
     tablero[14][6]=0;
     tablero[14][7]=0;
     tablero[14][8]=0;
     tablero[14][9]=0;
     tablero[14][10]=0;
     tablero[14][11]=0;
     tablero[14][12]=0;
     tablero[14][14]=0;
     tablero[14][15]=0;
     tablero[14][16]=0;
     tablero[14][17]=0;
     tablero[14][19]=0;
     tablero[14][21]=0;
     tablero[14][22]=0;
     tablero[14][23]=0;
     tablero[14][24]=0;

     tablero[7][2]=0;
     tablero[7][3]=0;
     tablero[7][4]=0;
     tablero[7][9]=0;
     tablero[7][19]=0;
     tablero[7][24]=0;

     tablero[13][2]=0;
     tablero[13][3]=0;
     tablero[13][4]=0;
     tablero[13][9]=0;
     tablero[13][19]=0;
     tablero[13][24]=0;

     tablero[8][2]=0;
     tablero[8][3]=0;
     tablero[8][4]=0;
     tablero[8][6]=0;
     tablero[8][7]=0;
     tablero[8][9]=0;
     tablero[8][11]=1;
     tablero[8][12]=1;
     tablero[8][13]=1;
     tablero[8][15]=0;
     tablero[8][16]=0;
     tablero[8][17]=0;
     tablero[8][18]=0;
     tablero[8][19]=0;
     tablero[8][21]=0;
     tablero[8][22]=0;
     tablero[8][24]=0;

     tablero[12][2]=0;
     tablero[12][3]=0;
     tablero[12][4]=0;
     tablero[12][6]=0;
     tablero[12][7]=0;
     tablero[12][9]=0;
     tablero[12][11]=1;
     tablero[12][12]=1;
     tablero[12][13]=1;
     tablero[12][15]=0;
     tablero[12][16]=0;
     tablero[12][17]=0;
     tablero[12][18]=0;
     tablero[12][19]=0;
     tablero[12][21]=0;
     tablero[12][22]=0;
     tablero[12][24]=0;


     tablero[9][6]=0;
     tablero[9][7]=0;
     tablero[9][11]=1;
     tablero[9][12]=1;
     tablero[9][13]=1;
     tablero[9][15]=0;
     tablero[9][16]=0;
     tablero[9][17]=0;
     tablero[9][21]=0;
     tablero[9][22]=0;

     tablero[11][6]=0;
     tablero[11][7]=0;
     tablero[11][11]=1;
     tablero[11][12]=1;
     tablero[11][13]=1;
     tablero[11][15]=0;
     tablero[11][16]=0;
     tablero[11][17]=0;
     tablero[11][21]=0;
     tablero[11][22]=0;

     tablero[10][1]=0;
     tablero[10][2]=0;
     tablero[10][3]=0;
     tablero[10][4]=0;
     tablero[10][6]=0;
     tablero[10][7]=0;
     tablero[10][8]=0;
     tablero[10][9]=0;
     tablero[10][11]=1;
     tablero[10][12]=1;
     tablero[10][13]=1;
     tablero[10][15]=0;
     tablero[10][16]=0;
     tablero[10][17]=0;
     tablero[10][18]=0;
     tablero[10][19]=0;
     tablero[10][21]=0;
     tablero[10][22]=0;
     tablero[10][23]=0;
     tablero[10][24]=0;
 }


}

Juego::Juego(int dificultad,int intervalos)
{
    estado=0; // juego sin arrancar
    lengthX = 21;  // dimensiones del juego
    lengthY = 27;
    direccion[0] = 0;
    direccion[1] = 1;
    timeFantasmas = 0;

    this->pacman = Personaje(1,1); // pacman


    //LOS FANTASMAS
    this->fantasmas[0] = Fantasma(10,11,dificultad,0);
    this->fantasmas[1] = Fantasma(9,12,dificultad/1.5,1);
    this->fantasmas[2] = Fantasma(10,12,dificultad/1.5,2);
    this->fantasmas[3] = Fantasma(11,12,dificultad/2,3);

    this->intervalos = intervalos;



 for( int i= 0; i<lengthX ; i++) {

     for(int j=0; j<lengthY; j++){

        if((i==0) || (i==(lengthX-1)) || (j==0) || (j==(lengthY-1))) {tablero[i][j]=0;} //Ponemos los bordes a 0
         else { tablero[i][j] = 2; } // 2 es casilla con comida

     }
 }

  //Ponemos como disponibles las casillas de teletransporte de los laterales
     tablero[0][13]=1;
     tablero[lengthX-1][13]=1;

   //Supercomida en las esquinas
     tablero[1][2]=3;
     tablero[19][1]=3;
     tablero[1][25]=3;
     tablero[19][25]=3;


     //A continuacion ponemos los limites  de dentro del tablero
     tablero[1][9]=0;
     tablero[1][10]=0;
     tablero[1][11]=0;
     tablero[1][12]=0;
     tablero[1][14]=0;
     tablero[1][15]=0;
     tablero[1][16]=0;
     tablero[1][17]=0;
     tablero[1][21]=0;
     tablero[1][22]=0;

     tablero[19][9]=0;
     tablero[19][10]=0;
     tablero[19][11]=0;
     tablero[19][12]=0;
     tablero[19][14]=0;
     tablero[19][15]=0;
     tablero[19][16]=0;
     tablero[19][17]=0;
     tablero[19][21]=0;
     tablero[19][22]=0;

     tablero[2][2]=0;
     tablero[2][3]=0;
     tablero[2][4]=0;
     tablero[2][6]=0;
     tablero[2][7]=0;
     tablero[2][9]=0;
     tablero[2][10]=0;
     tablero[2][11]=0;
     tablero[2][12]=0;
     tablero[2][14]=0;
     tablero[2][15]=0;
     tablero[2][16]=0;
     tablero[2][17]=0;
     tablero[2][19]=0;
     tablero[2][21]=0;
     tablero[2][22]=0;
     tablero[2][24]=0;

     tablero[18][2]=0;
     tablero[18][3]=0;
     tablero[18][4]=0;
     tablero[18][6]=0;
     tablero[18][7]=0;
     tablero[18][9]=0;
     tablero[18][10]=0;
     tablero[18][11]=0;
     tablero[18][12]=0;
     tablero[18][14]=0;
     tablero[18][15]=0;
     tablero[18][16]=0;
     tablero[18][17]=0;
     tablero[18][19]=0;
     tablero[18][21]=0;
     tablero[18][22]=0;
     tablero[18][24]=0;

     tablero[3][2]=0;
     tablero[3][3]=0;
     tablero[3][4]=0;
     tablero[3][6]=0;
     tablero[3][7]=0;
     tablero[3][9]=0;
     tablero[3][10]=0;
     tablero[3][11]=0;
     tablero[3][12]=0;
     tablero[3][14]=0;
     tablero[3][15]=0;
     tablero[3][16]=0;
     tablero[3][17]=0;
     tablero[3][19]=0;
     tablero[3][24]=0;

     tablero[17][2]=0;
     tablero[17][3]=0;
     tablero[17][4]=0;
     tablero[17][6]=0;
     tablero[17][7]=0;
     tablero[17][9]=0;
     tablero[17][10]=0;
     tablero[17][11]=0;
     tablero[17][12]=0;
     tablero[17][14]=0;
     tablero[17][15]=0;
     tablero[17][16]=0;
     tablero[17][17]=0;
     tablero[17][19]=0;
     tablero[17][24]=0;

     tablero[4][2]=0;
     tablero[4][3]=0;
     tablero[4][4]=0;
     tablero[4][6]=0;
     tablero[4][7]=0;
     tablero[4][9]=0;
     tablero[4][10]=0;
     tablero[4][11]=0;
     tablero[4][12]=0;
     tablero[4][14]=0;
     tablero[4][15]=0;
     tablero[4][16]=0;
     tablero[4][17]=0;
     tablero[4][19]=0;
     tablero[4][20]=0;
     tablero[4][21]=0;
     tablero[4][22]=0;
     tablero[4][24]=0;

     tablero[16][2]=0;
     tablero[16][3]=0;
     tablero[16][4]=0;
     tablero[16][6]=0;
     tablero[16][7]=0;
     tablero[16][9]=0;
     tablero[16][10]=0;
     tablero[16][11]=0;
     tablero[16][12]=0;
     tablero[16][14]=0;
     tablero[16][15]=0;
     tablero[16][16]=0;
     tablero[16][17]=0;
     tablero[16][19]=0;
     tablero[16][20]=0;
     tablero[16][21]=0;
     tablero[16][22]=0;
     tablero[16][24]=0;

     tablero[5][24]=0;

     tablero[15][24]=0;

     tablero[6][2]=0;
     tablero[6][3]=0;
     tablero[6][4]=0;
     tablero[6][6]=0;
     tablero[6][7]=0;
     tablero[6][8]=0;
     tablero[6][9]=0;
     tablero[6][10]=0;
     tablero[6][11]=0;
     tablero[6][12]=0;
     tablero[6][14]=0;
     tablero[6][15]=0;
     tablero[6][16]=0;
     tablero[6][17]=0;
     tablero[6][19]=0;
     tablero[6][21]=0;
     tablero[6][22]=0;
     tablero[6][23]=0;
     tablero[6][24]=0;

     tablero[14][2]=0;
     tablero[14][3]=0;
     tablero[14][4]=0;
     tablero[14][6]=0;
     tablero[14][7]=0;
     tablero[14][8]=0;
     tablero[14][9]=0;
     tablero[14][10]=0;
     tablero[14][11]=0;
     tablero[14][12]=0;
     tablero[14][14]=0;
     tablero[14][15]=0;
     tablero[14][16]=0;
     tablero[14][17]=0;
     tablero[14][19]=0;
     tablero[14][21]=0;
     tablero[14][22]=0;
     tablero[14][23]=0;
     tablero[14][24]=0;

     tablero[7][2]=0;
     tablero[7][3]=0;
     tablero[7][4]=0;
     tablero[7][9]=0;
     tablero[7][19]=0;
     tablero[7][24]=0;

     tablero[13][2]=0;
     tablero[13][3]=0;
     tablero[13][4]=0;
     tablero[13][9]=0;
     tablero[13][19]=0;
     tablero[13][24]=0;

     tablero[8][2]=0;
     tablero[8][3]=0;
     tablero[8][4]=0;
     tablero[8][6]=0;
     tablero[8][7]=0;
     tablero[8][9]=0;
     tablero[8][11]=0;
     tablero[8][12]=0;
     tablero[8][13]=0;
     tablero[8][15]=0;
     tablero[8][16]=0;
     tablero[8][17]=0;
     tablero[8][19]=0;
     tablero[8][21]=0;
     tablero[8][22]=0;
     tablero[8][24]=0;

     tablero[12][2]=0;
     tablero[12][3]=0;
     tablero[12][4]=0;
     tablero[12][6]=0;
     tablero[12][7]=0;
     tablero[12][9]=0;
     tablero[12][11]=0;
     tablero[12][12]=0;
     tablero[12][13]=0;
     tablero[12][15]=0;
     tablero[12][16]=0;
     tablero[12][17]=0;
     tablero[12][19]=0;
     tablero[12][21]=0;
     tablero[12][22]=0;
     tablero[12][24]=0;


     tablero[9][6]=0;
     tablero[9][7]=0;
     tablero[9][11]=0;
     tablero[9][12]=1;
     tablero[9][13]=0;
     tablero[9][15]=0;
     tablero[9][16]=0;
     tablero[9][17]=0;
     tablero[9][21]=0;
     tablero[9][22]=0;

     tablero[11][6]=0;
     tablero[11][7]=0;
     tablero[11][11]=0;
     tablero[11][12]=1;
     tablero[11][13]=0;
     tablero[11][15]=0;
     tablero[11][16]=0;
     tablero[11][17]=0;
     tablero[11][21]=0;
     tablero[11][22]=0;

     tablero[10][1]=0;
     tablero[10][2]=0;
     tablero[10][3]=0;
     tablero[10][4]=0;
     tablero[10][6]=0;
     tablero[10][7]=0;
     tablero[10][8]=0;
     tablero[10][9]=0;
     tablero[10][11]=1;
     tablero[10][12]=1;
     tablero[10][13]=0;
     tablero[10][15]=0;
     tablero[10][16]=0;
     tablero[10][17]=0;
     tablero[10][18]=0;
     tablero[10][19]=0;
     tablero[10][21]=0;
     tablero[10][22]=0;
     tablero[10][23]=0;
     tablero[10][24]=0;

     comida = 0;
     for( int i= 1; i<lengthX-2 ; i++){
         for(int j=1; j<lengthY-2; j++){

            if(tablero[i][j]==1) {comida++;}


         }
     }

}

void Juego :: setDireccion(int direccion){

    this->direccion[0] = direccion;

    if(direccion!=0) this->direccion[1] = direccion;
}

int Juego :: getDireccion(){

    return direccion[1];
}

int Juego :: queHay(int x, int y){

    if(hayFantasma(x,y)) return (4+hayFantasma(x,y));
    else { return this->tablero[x][y]; }


}

int Juego :: hayFantasma(int x, int y){
    int hay = 0;
    int i,j;



        for(int a=0; a<4 ; a++){

            fantasmas[a].getPosicion(&i,&j);
             if(x==i && y==j) {

                 if (timeFantasmas == 0) {  // fantasmas normales
                   hay = fantasmas[a].getId() + 1;
                 }

                 else{  hay = 5 + fantasmas[a].getId();     //fantasmas vulnerables
                 }

             }

       }

    return hay;
}

bool Juego :: sePuedeMover( int direccion, int x, int y){
    bool sePuede = true;

    switch (direccion) {

        case 1: // arriba
         if(tablero[x][y-1]==0) sePuede = false;
        break;


       case 2:  //izquierda
         if(tablero[x-1][y]==0) sePuede = false;
       break;


       case 3:  // abajo
         if(tablero[x][y+1]==0) sePuede = false;
       break;


       case 4:  // derecha
         if(tablero[x+1][y]==0) sePuede = false;
       break;


       default :
        break;

    }
    return sePuede;

}

void Juego :: moverPacman ( ){

    int x,y;
    pacman.getPosicion(&x,&y);

    //movemos la clase si se puede
    if(sePuedeMover(direccion[0],x,y)) {
        pacman.setDireccion(direccion[0]);

        //borramos el pacman actual
        tablero[x][y]=1;



        //Las casillas de teletransporte
        if((x==0 && y==13 )||(x==lengthX-1 && y==13 )){

           if(x==0 && y==13 ) {pacman.setPosicion(lengthX-2,13);}
           else {pacman.setPosicion(1,13);}

        }
        else{pacman.mover();}

    }

    //actualizamos el tablero
    pacman.getPosicion(&x,&y);
    if(tablero[x][y]==3) protocoloFantasma(); // si comemos una superfruta se inicia la cuenta atras
    tablero[x][y]=4; // nueva casilla del pacman

}

void Juego :: moverFantasma (Fantasma *fantasma){

    //Buscamos la direccion optima para el fantasma
    int x,y;
    fantasma->getPosicion(&x,&y);
    fantasma->moverFantasma(this->pacman);


    // Si esa direccion se puede ejecutar se ejecuta
    int d;
    fantasma->getDireccion(&d);

    if(sePuedeMover(d,x,y)) {

        fantasma->mover();

    }

    else{
        fantasma->getDireccion(&d);
        if (sePuedeMover(d,x,y)) fantasma->mover();
        }


}

void Juego :: moverFantasmas(){
    for(int i=0; i<4 ; i++){
        moverFantasma(&fantasmas[i]);}
}

void Juego :: actualizarEstado(){

    switch (estado){

        case 0:
            estado=1;
            break;

        case 1:

            if (comida==0) estado =3; //Si acabamos la comida hemos ganado

            else { // comprobamos si pacman se lo ha comido un fantasma
                comprobarComida();

                }


            break;

        default:
            break;



    }





}

int Juego :: getEstado(){

    return this->estado;
}

void Juego :: procesarTiempo(){

    if(timeFantasmas>0) {
        timeFantasmas -= intervalos/1000;
        if(timeFantasmas==0) tablero[10][11]=1;

    }


}

int Juego:: getTimeFantasmas(){

    return timeFantasmas;
}

void Juego :: comerFantasma(int id){

 fantasmas[id].setPosicion(10,13);


}

void Juego :: protocoloFantasma(){

    //cerramos puertas
    tablero[10][11]=0;


    //iniciamos countdown
    timeFantasmas = 10;
}

void Juego :: comprobarComida(){
 int xp,yp;
 pacman.getPosicion(&xp,&yp);

 if(hayFantasma(xp,yp)) {

     if (timeFantasmas>0) { //Si los fantasmas son vulnerables es pacman quien puede comer

         comerFantasma(hayFantasma(xp,yp)-5);

     }

     else{   // Si no son vulnerables, pacman es quien es comido y se pierde

         this->estado=2;

     }

 }


}

void Juego :: ronda (){

    moverPacman();

    comprobarComida();

    moverFantasmas();

    procesarTiempo();

    actualizarEstado();

}

