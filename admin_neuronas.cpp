#include "admin_neuronas.h"

Admin_Neuronas::Admin_Neuronas(){
    this->head=NULL;
}

void Admin_Neuronas::agregar_inicio(Neurona *nuevo){
    if (this->head == NULL){
        head = nuevo;
        return;
    }
    nuevo->next = head;
    head = nuevo;
}

void Admin_Neuronas::agregar_final(Neurona *nuevo){
    invertirLista(&head);
    if (this->head == NULL){
        head = nuevo;
        return;
    }
    nuevo->next = head;
    head = nuevo;
    invertirLista(&head);
}

void Admin_Neuronas::mostrar(){
    if(head != NULL){
        cout<<"\tPAQUETES"<<endl<<endl;
        Neurona *aux = head;
        while(aux != NULL){
            cout<<"ID: "<<aux->getId()<<endl;
            cout<<"VOLTAJE: "<<aux->getVoltaje()<<endl;
            cout<<"POS X: "<<aux->getPosX()<<endl;
            cout<<"POS Y: "<<aux->getPosY()<<endl;
            cout<<"RED: "<<aux->getRed()<<endl;
            cout<<"GREEN: "<<aux->getGreen()<<endl;
            cout<<"BLUE: "<<aux->getBlue()<<endl<<endl;
            aux = aux->next;
        }
    }else{
        cout<<"\n\tLa lista esta vacia..."<<endl<<endl;
    }
}

void Admin_Neuronas::invertirLista(Neurona **head){
    Neurona *previous = NULL;
    Neurona *current = *head;
    while (current != NULL){
        Neurona *next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *head = previous;
}
