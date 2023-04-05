/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPilha.cpp
 * Author: aluno
 * 
 * Created on 13 de outubro de 2022, 09:02
 */

#include <cstdlib>

#include "cPilha.h"

#include <iostream>

using namespace std;

cPilha::cPilha() {
}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}



void cPilha :: Cadastrar(){
    
    
    int valorInserido;
    
    cout<<"Digite o valor inserido: ";
    cin>>valorInserido;
    
    this->topo = NULL;
    this->aux=(struct no*) malloc(sizeof(aux));
    this->aux->elemento = valorInserido;
    this->aux->anterior= this->topo;
    this->topo=aux;
    
    /*cout<<this->topo <<"\n";
    cout<<this->aux <<"\n";
    cout<<this->aux->anterior <<"\n";
    cout<<this->topo <<"\n";
    */

}

void cPilha :: Listar(){
   
    for(this->aux = topo; this->aux!=NULL; this->aux=this->aux->anterior){
        cout<< aux->elemento<<endl;
    }
}   

void cPilha :: Menu(){
    int opc;
    while(opc!=0){
        switch(opc){
            case 1:
                this->Cadastrar();
            break;
            case 2:
                this->Listar();
            break;
            case 3:
                this->Remover();
            break;
            
        }
        cout<<endl;
        cout<<"Digete\n1-Cadastrar\n2-Listar\n 3-Remover\n0-sair : ";
        cin>>opc;
    }
}

void cPilha ::Remover(){
    int bck;
    if(topo!=NULL){
        this->aux = this->topo;
        this->topo= this->aux->anterior;
        free(topo);
        cout<<"\nRemovido com sucesso";
    }
}
        
        
    