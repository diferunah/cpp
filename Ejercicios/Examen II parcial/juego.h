#include <iostream>  //paso 2 - crear juego.h

using namespace std;


void inicializarArreglo();
void dificultad();
void gotoxy(int x,int y);
void pintar();
void dibujarcuerpo();    //Paso 8 - declaraciones en juego.h
void guardarposicion();
void borrarcuerpo();
void Teclear(char &tecla);
void comida();
bool gameover();
void puntosx();
void proceso(char &tecla, int &puntos);