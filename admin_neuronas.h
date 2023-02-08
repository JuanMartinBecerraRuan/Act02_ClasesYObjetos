#ifndef ADMIN_NEURONAS_H
#define ADMIN_NEURONAS_H
#include <neurona.h>

class Admin_Neuronas{
    private:
        Neurona *head;
        Neurona *aux;
    public:
        Admin_Neuronas();
        void agregar_inicio(Neurona *);
        void agregar_final(Neurona *);
        void mostrar();
        void invertirLista(Neurona**);
};

#endif // ADMIN_NEURONAS_H
