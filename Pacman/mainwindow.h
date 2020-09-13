#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTimer>
#include<Juego.h>
#include<QKeyEvent>
#include<graphics.h>
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void iniciarJuego();
    void perder();
    void ganar();
    void actualizarJuego();

private:
    Ui::MainWindow *ui;
    Juego juego;
    QTimer *timer = new QTimer;
    Graphics graficos;
    QMessageBox msgBox;
    int intervalos;
    bool juegoEmpezado;


protected:
    void keyPressEvent(QKeyEvent *e);

private slots:

    void actualizarEstado();

};
#endif // MAINWINDOW_H
