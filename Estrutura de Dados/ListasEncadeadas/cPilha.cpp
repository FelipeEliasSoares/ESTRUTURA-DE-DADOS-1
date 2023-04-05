/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPilha.cpp
 * Author: aluno
 * 
 * Created on 26 de outubro de 2022, 10:29
 */

#include "cPilha.h"
#include <iostream>
#include <cstdlib>

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
    if(Pesquisar(valorInserido)==true){
        cout<<"Valor ja existente";
        cout<<endl;
    }
    else{
        this->aux=(struct nodo*) malloc(sizeof(aux));
        this->aux->elemento = valorInserido;
        this->aux->anterior= this->topo;
        this->topo=aux;
    }
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
            case 4:
                this->Meio();
            
        }
        cout<<endl;
        cout<<"Digete\n1-Cadastrar\n2-Listar\n3-Remover\n0-sair\n4-Meio\n: ";
        cin>>opc;
    }
}

void cPilha ::Remover(){
    if(this->topo!=NULL){
        this->aux = this->topo;
        this->topo= this->aux->anterior;
        free(topo);
        cout<<"\nRemovido com sucesso";
    }
}
  

int cPilha ::Meio(){
    int contador=0,meio=0,valor=0;
     for(this->aux = topo; this->aux!=NULL; this->aux=this->aux->anterior){
        contador++;
    }
    cout<<"O numero de elementos é "<<contador<<endl;
    meio=contador/2;
    cout<<meio<<endl;
    contador=0;
     for(this->aux=this->topo; this->aux!=NULL; this->aux=this->aux->anterior){
         if(meio == contador){
          valor= this->aux->elemento;
          
        }
         contador++;
    }
    return valor;
}

bool cPilha ::Pesquisar(int valorInserido){
    bool chave=false;
    for(this->aux = topo; this->aux !=NULL; this->aux->anterior){
        if(valorInserido== this->aux->elemento){
            return chave=true;
        }
        return chave;
    }
}