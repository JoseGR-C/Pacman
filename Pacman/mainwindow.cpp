#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<Graficos.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gameLabel->setVisible(false);
    juegoEmpezado = false;
    QWidget::setWindowTitle ( " Pacman ");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: iniciarJuego(){

    this->juegoEmpezado=true; // arrancamos el juego

     intervalos = 500; // ns entre movimiento y movimiento

    Juego juego(95,intervalos); // dificultad
    this->juego = juego;

    connect(timer,SIGNAL(timeout()),this,SLOT(actualizarEstado())); // arancamos slots
    timer->start(intervalos); // empezamos timer con intervalos

    //sacamos la pantalla inicial
    graficos.setImage(&juego);
    ui->pantalla->setPixmap(QPixmap::fromImage(graficos.getImage()));
}

void MainWindow :: actualizarEstado(){

    actualizarJuego(); // jugamos una ronda a nivel logico

    graficos.setImage(&juego); //cargamos la imagen
    ui->pantalla->setPixmap(QPixmap::fromImage(graficos.getImage())); // la sacamos por pantalla

    if(juego.getEstado()==2) perder();
    else if (juego.getEstado()==3) ganar();
}

void MainWindow :: actualizarJuego(){

    juego.ronda();

}

void MainWindow :: perder(){

    ui->gameLabel->setVisible(true);
    timer->stop();

    this->timer->stop();
    msgBox.setWindowTitle("Juego terminado");
    msgBox.setIcon(QMessageBox::Critical);
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    msgBox.setEscapeButton(QMessageBox::No);
    msgBox.setText("Perdiste :( \n ¿Volver a jugar?");

    if (QMessageBox::Yes == msgBox.exec()){
         iniciarJuego();
    }

    else{

        QCoreApplication::quit();
    }

}

void MainWindow :: ganar(){

    timer->stop();

    this->timer->stop();
    msgBox.setWindowTitle("Juego terminado");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    msgBox.setEscapeButton(QMessageBox::No);
    msgBox.setText("Ganaste!! :) \n ¿Volver a jugar?");

    if (QMessageBox::Yes == msgBox.exec()){
         iniciarJuego();
    }

    else{

        QCoreApplication::quit();
    }



}

void MainWindow :: keyPressEvent(QKeyEvent *e){

    int tecla = e->key();    //traducimos de tecla a direccion

    switch(tecla){

    case 32 :   // Space : empezar
       if (juegoEmpezado==false) iniciarJuego();
       else{

           if(timer->isActive()) timer->stop();
           else{timer->start(intervalos);}
       }
        break;

    case 87:  // W : arriba
        juego.setDireccion(1);
        break;

    case 65 : // A : izquierda
        juego.setDireccion(2);
        break;

    case 83: // S : abajo
        juego.setDireccion(3);
        break;

    case 68: // D: derecha
        juego.setDireccion(4);
        break;

    default:
       break;
    }

}
