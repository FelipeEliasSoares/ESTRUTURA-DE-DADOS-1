/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cDuplamente.h
 * Author: felipe
 *
 * Created on 14 de novembro de 2022, 19:37
 */

#ifndef CDUPLAMENTE_H
#define CDUPLAMENTE_H


#include <cstdlib>


struct Nodo{
    int elemento;
    Nodo *ant,*prox;
};

class cDuplamente {
public:
    cDuplamente();
    cDuplamente(const cDuplamente& orig);
    virtual ~cDuplamente();
    
    
        
    Nodo *inicio=NULL,*fim=NULL,*aux=NULL;
    
    void Inserir();
    void Menu();
    void Listar();
    void Remover();
    void Inserir_Meio();
    void Remover_Meio();
private:

};

#endif /* CDUPLAMENTE_H */

