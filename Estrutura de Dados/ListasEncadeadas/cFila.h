/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cFila.h
 * Author: aluno
 *
 * Created on 27 de outubro de 2022, 08:09
 */

#ifndef CFILA_H
#define CFILA_H

#include <cstdlib>

struct nodo{
    int elem;
    nodo *prox;//O próximo elemento a ser chamado tem que ser do tipo nodo, no caso *prox armazena recebe o endereco de proximo nodo
};
    
    
class cFila {
public:
    cFila();
    cFila(const cFila& orig);
    virtual ~cFila(); 

    nodo *inicio = NULL, *fim = NULL, *aux = NULL;
    
    
    void Menu();
    void Cadastrar();
    void Listar();
    void Remover();
    bool Consultar(int x);

    
    
private:

};

#endif /* CFILA_H */

