/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPilha.h
 * Author: aluno
 *
 * Created on 26 de outubro de 2022, 10:29
 */

#ifndef CPILHA_H
#define	CPILHA_H

#include <cstdlib>


    
class cPilha {
public:
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    struct nodo{
        int elemento;
        nodo *anterior;//O próximo elemento a ser chamado tem que ser do tipo nodo, no caso *prox armazena recebe o endereco de proximo nodo
    };
    
    
    nodo *topo=NULL, *aux=NULL,*meio=NULL;
    
    void Menu();
    void Cadastrar();
    void Listar();
    void Remover();
    void Consultar();
    int Meio();
    bool Pesquisar(int valorInserido);
    
private:

};

#endif	/* CPILHA_H */
