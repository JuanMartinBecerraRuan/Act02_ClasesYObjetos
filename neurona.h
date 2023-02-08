#ifndef NEURONA_H
#define NEURONA_H
#include <iostream>

using namespace std;

class Neurona{
    private:
        int id, posicion_x,posicion_y,red,green,blue;
        double voltaje;
    public:
        Neurona *next;
        Neurona(int,double,int,int,int,int,int);
        void mostrar(Neurona *head);
        int getId();
        double getVoltaje();
        int getPosX();
        int getPosY();
        int getRed();
        int getGreen();
        int getBlue();
};

#endif // NEURONA_H
