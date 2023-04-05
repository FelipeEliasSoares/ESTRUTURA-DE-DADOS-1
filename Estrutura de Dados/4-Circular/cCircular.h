/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCircular.h
 * Author: aluno
 *
 * Created on 17 de novembro de 2022, 10:21
 */

#ifndef CCIRCULAR_H
#define CCIRCULAR_H


#include <cstdlib>


struct Nodo{
    int elemento;
    Nodo *ant,*proximo;
};


class cCircular {
public:
    cCircular();
    cCircular(const cCircular& orig);
    virtual ~cCircular();
    
    Nodo *inicio=NULL,*fim=NULL,*aux=NULL;
    
    void Menu();
    void Inserir();
    void Remover();
    void Listar();
private:

};

#endif /* CCIRCULAR_H */

