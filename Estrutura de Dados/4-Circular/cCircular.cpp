/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCircular.cpp
 * Author: aluno
 * 
 * Created on 17 de novembro de 2022, 10:21
 */

#include "cCircular.h"
#include <iostream>

using namespace std;
cCircular::cCircular() {
}

cCircular::cCircular(const cCircular& orig) {
}

cCircular::~cCircular() {
}

void cCircular :: Inserir(){
    int elemento;
    
    cout<<"Digite um elemento: ";
    cin>>elemento;
    
    this->aux=(struct *Nodo)malloc(sizeof(aux));
    this->aux->elemento=elemento;
    
    if(this->inicio==NULL){
        this->aux->ant=NULL;
        this->inicio=this->aux;
    }
    else{
        this->aux->proximo=NULL;
        this->fim->proximo=this->aux;
        this->aux->ant=this->fim;
        this->aux->proximo=this->inicio;
    }
    
    this->fim->proximo=NULL;
    this->fim=this->aux;
}

void cCircular::Menu(){
    int opc;
    
    while(opc!=0){
        switch(opc){
            case 1:
                this->Inserir();
            break;
        }
    }
}