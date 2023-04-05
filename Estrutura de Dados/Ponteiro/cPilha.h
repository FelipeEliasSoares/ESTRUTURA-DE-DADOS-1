/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPilha.h
 * Author: aluno
 *
 * Created on 13 de outubro de 2022, 09:02
 */

#ifndef CPILHA_H
#define CPILHA_H



class cPilha {
public:
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    struct no{
        int elemento;
        struct no *anterior;
    }*topo,*aux;
    
    void Menu();
    void Cadastrar();
    void Listar();
    void Remover();
    void Consultar();
    
    
private:

};

#endif /* CPILHA_H */

